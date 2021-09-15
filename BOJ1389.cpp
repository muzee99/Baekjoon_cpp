#include <bits/stdc++.h>
using namespace std;
int N,M;
int acquans[100][100] = {0,};
int weight[100] = {0,};
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int x,y;
        cin >> x >> y;
        acquans[x][y] = 1;
        acquans[y][x] = 1;
        
    }
}