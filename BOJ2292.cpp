// BOJ2292_벌집
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, sum=1, k=0;
    cin >> N;
    while(sum<N) {
        sum +=6*++k;
    }
    cout << k+1;
}