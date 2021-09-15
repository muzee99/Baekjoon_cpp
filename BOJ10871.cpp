// BOJ10871_X보다 작은 수
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int N, X, a;
    cin >> N >> X;
    for(int i=0; i<N; i++) {
        cin >> a;
        if(a<X) cout << a << " ";
    }
}