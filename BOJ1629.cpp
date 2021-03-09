// BOJ1629_곱셈
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
long long A,B,C;
long long fx(long long x, long long y) {
    if(!y) return 1;
    long long num = fx(x,y/2)%C;
    num = (num*num)%C;
    if(y%2) return (num*x)%C;
    else return num%C;
}
int main() {
    cin >> A >> B >> C;
    cout << fx(A%C, B);
}