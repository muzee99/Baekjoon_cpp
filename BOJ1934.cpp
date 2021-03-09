// BOJ1934_최소공배수
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
    int N,a,b;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> a >> b;
        cout << a*b/GCD(a,b) << "\n";
    }
}