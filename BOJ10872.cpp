#include <bits/stdc++.h>
using namespace std;
int facto(int N) {
    if(!N) return 1;
    return N*facto(N-1);
}
int main() {
    int N;
    cin >> N;
    cout << facto(N);
}