// BOJ2438_별 찍기 - 1
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        for(int j=0; j<i; j++) cout << "*";
        cout << "\n";
    }
}