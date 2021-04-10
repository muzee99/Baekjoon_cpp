// BOJ1978_소수 찾기
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int isPrime(int n) {
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(!(n%2)) return 0;
    if(!(n%3)) return 0;
    for(int i=n-1; i>1; i--) 
        if(!(n%i)) return 0;
    return 1;
}
int main() {
    int N, cnt=0;
    cin >> N;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        cnt += isPrime(x);
    }
    cout << cnt;
}