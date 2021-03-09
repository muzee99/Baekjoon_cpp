#include <bits/stdc++.h>
using namespace std;
int m[21];
int fibo(int n) {
    if(!n) return 0;
    if(n==1) return 1;
    if(m[n]) return m[n];
    return m[n] = fibo(n-1) + fibo(n-2);
}
int main() {
    int N;
    cin >> N;
    cout << fibo(N);
}