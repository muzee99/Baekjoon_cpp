// BOJ1037_약수
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> factor(N);
    for(int i=0; i<N; i++) cin >> factor[i];
    cout << *max_element(factor.begin(), factor.end()) * *min_element(factor.begin(), factor.end());
}