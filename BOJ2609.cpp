// BOJ2609_최대공약수와 최소공배수
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int GCD(int x, int y) {
    if(!(x%y)) return y;
    return GCD(y,x%y);
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int gcd = GCD(a,b);
    cout << gcd << "\n" << a*b/gcd;
}