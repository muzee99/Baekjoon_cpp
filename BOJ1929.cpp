// BOJ1929_소수 구하기
// 5856KB
// 20ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int M,N;
    cin >> M >> N;
    vector<int> v(N+1,1);
    v[1] = 0;
    for(int i=2; i<=N; i++) {
        if(!v[i]) continue;
        for(int j=2*i; j<=N; j+=i) 
                v[j] = 0;
    }
    for(int i=M; i<=N; i++) 
        if(v[i]) cout << i << "\n";
}