// BOJ2178_미로 탐색
// 2104KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int N,M;
string maze[100];
int isChecked[100][100] = {0,};
int cnt[100][100] = {0,};
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int isInRange(int r, int c) {
    return (r>=0 && r<N) && (c>=0 && c<M);
}
void BFS(int row, int col) {
    queue<int> rowQ;
    queue<int> colQ;
    rowQ.push(row);
    colQ.push(col);
    isChecked[row][col] = true;
    cnt[row][col]++;
    while(!rowQ.empty()) {
        int r = rowQ.front();
        int c = colQ.front();
        rowQ.pop();
        colQ.pop();
        for(int i=0; i<4; i++) {
            int x = r+dir[i][0];
            int y = c+dir[i][1];
            if(!isInRange(x,y)) continue;
            if(maze[x][y]=='0') continue;
            if(!isChecked[x][y]) {
                isChecked[x][y] = true;
                cnt[x][y] = cnt[r][c]+1;
                rowQ.push(x);
                colQ.push(y);
            }
        }
    }
}
int main() {
    cin >> N >> M;
    for(int i=0; i<N; i++) cin >> maze[i];
    BFS(0,0);
    cout << cnt[N-1][M-1];
}