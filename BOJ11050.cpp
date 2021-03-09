// BOJ11050_이항 계수 1
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, K;
    cin >> N >> K;
    int a = 1, b = 1;
    for(int i=0; i<K; i++) {
        a *= N-i;
        b *= i+1;
    }
    cout << a/b;
}