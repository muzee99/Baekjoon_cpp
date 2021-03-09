// BOJ11051_이항 계수 2
// 9844KB
// 8ms
#include <bits/stdc++.h>
using namespace std;
int N,K;
long long dp[1001][1001];
long long fx(int n, int k) {
    if(!k) return 1;
    if(n==k) return 1;
    if(dp[n][k]) return dp[n][k];
    return dp[n][k] = (fx(n-1,k) + fx(n-1,k-1))%10007;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> K;
    cout << fx(N,K)%10007;
}