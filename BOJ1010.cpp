// BOJ1010_다리 놓기
// 2020KB
// 16ms
#include <bits/stdc++.h>
using namespace std;
int T,N,M,dp[30][30];
int combination(int n, int k) {
    if(!k) return 1;
    if(n==k) return 1;
    if(dp[n][k]) return dp[n][k];
    return dp[n][k] = combination(n-1,k) + combination(n-1,k-1);
}
int main(){
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> N >> M;
        cout << combination(M,N) << "\n";
    }
}