// BOJ3036_링
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
    if(!(a%b)) return b;
    return GCD(b,a%b);
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, first, second;
    cin >> N >> first;
    for(int i=1; i<N; i++) {
        cin >> second;
        int gcd = GCD(first, second);
        cout << first/gcd << "/" << second/gcd << "\n";
    }
}