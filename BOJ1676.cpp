// BOJ1676_팩토리얼 0의 개수
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int N, chk[501]={0,};
pair<int,int> dp[501];
pair<int,int> fx(int n) {
    if(!n) return make_pair(0,0);
    if(chk[n]) return dp[n];
    int k=n, cnt=0;
    while(!(k%2)) {
        k /= 2;
        cnt++;
    }
    pair<int,int> temp = fx(n-1);
    dp[n].first = temp.first+cnt;
    k=n;
    cnt=0;
    while(!(k%5)) {
        k /= 5;
        cnt++;
    }
    dp[n].second = temp.second+cnt;
    chk[n] = 1;
    return dp[n];
}
int main() {
    cin >> N;
    pair<int,int> ans = fx(N);
    cout << min(ans.first, ans.second);
}