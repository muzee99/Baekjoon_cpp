#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, K;
    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> K;
        vector<int> cost(K);
        for(int j=0; j<K; j++) cin >> cost[j];
        for(auto e:cost) cout << e << " ";
        cout << "\n";
    }
}