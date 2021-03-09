#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, int from, int to, int extra) {
    if(n==0) return;
    hanoi(n-1,from,extra,to);
    cout << from << " " << to << "\n";
    hanoi(n-1,extra,to,from);
}
int main() {
    int N,K;
    cin >> N;
    K = (1<<N)-1;
    cout << K << "\n";
    hanoi(N,1,3,2);
}