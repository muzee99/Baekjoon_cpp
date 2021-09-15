#include <bits/stdc++.h>
using namespace std;
int N,M;
int box[1001][1001];
int chk[1001][1001];

int isInBox(int r, int c);


int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> box[i][j];
        }
    }
}

int isInBox(int r, int c) {
    return r>=0 && r<N && c>=0 && c<M;
}
