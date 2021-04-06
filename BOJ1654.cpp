// BOJ1654_랜선 자르기
// 2176KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N,K;
    cin >> K >> N;
    vector<int> line(K);
    for(int i=0; i<K; i++) cin >> line[i];
    sort(line.begin(), line.end());
    int maxLine = 0;
    ll left = 1, right = line.back();
    while(left<=right) {
        ll mid = (left+right)/2;
        int cnt = 0;
        for(auto k:line) cnt += k/mid;
        if(cnt>=N) {
            maxLine = mid;
            left = mid+1;
        }
        else if(cnt<N) right = mid-1;
        else maxLine = mid;
    }
    cout << maxLine;
}