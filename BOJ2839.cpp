// BOJ2839_설탕 배달
// 2036KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int dp[5001] = {0,};
int fx(int weight) {
    if(weight<3) return 100000;
    if(weight==3 || weight==5) return 1;
    if(dp[weight]) return dp[weight];
    return dp[weight] = min(fx(weight-3), fx(weight-5))+1;
}
int main() {
    int N;
    cin >> N;
    int ans = fx(N);
    if(fx(N)==100001) cout << -1;
    else cout << ans;
}