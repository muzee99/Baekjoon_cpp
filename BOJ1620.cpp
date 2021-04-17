// BOJ1620_나는야 포켓몬 마스터 이다솜
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int N,M;
    cin >> N >> M;
    vector<string> monster(N);
    for(int i=0; i<N; i++) cin >> monster[i];
    for(int i=0; i<M; i++) {
        string x;
        cin >> x;
        if(x[0]>='0' && x[0]<='9') cout << monster[stoi(x)-1] << "\n";
        else cout << find(monster.begin(), monster.end(), x)-monster.begin()+1 << "\n";
    }
}