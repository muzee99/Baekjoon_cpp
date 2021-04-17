#include <bits/stdc++.h>
using namespace std;
int dp[100001];
int fx(int n) {
    if(n<=0) return 1;
    if(dp[n]) return dp[n];
    if(n%2) return dp[n] = min(fx(n-1), fx(n-2));
    return dp[n] = min(min(fx(n-1), fx(n-2)), fx(n/2));
}
int main() {
    int N,K;
    cin >> N >> K;
    cout << fx(N-K);
}