// BOJ1330_두 수 비교하기
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B;
    cin >> A >> B;
    if(A>B) cout << ">";
    else if(A<B) cout << "<";
    else cout << "==";
}