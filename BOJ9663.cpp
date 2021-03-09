#include <bits/stdc++.h>
using namespace std;
int N, cnt;
int board[15][15]={0,};
int dir[8][2] = {{1,1}, {1,0}, {1,-1}, {0,-1}, {0,1}, {-1,1}, {-1,0}, {-1,-1}};
stack< pair<int,int> > s;
stack<int*> b;
void printStack(stack< pair<int,int> > sck) {
    cout << "==================================\n";
    while(!sck.empty()) {
        cout << sck.top().first << " " << sck.top().second << "\n";
        sck.pop();
    }
}
void printBoard() {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}
void Queen(int r, int c) {
    board[r][c] += 1;
    for(int i=1; i<N; i++) {
        for(int j=0; j<8; j++) {
            int row = r+dir[j][0]*i;
            int col = c+dir[j][1]*i;
            if(row>=0 && row<N && col>=0 && col<N) board[row][col] += 1;
        }
    }
}
void unQueen(int r, int c) {
    board[r][c] -= 1;
    for(int i=1; i<N; i++) {
        for(int j=0; j<8; j++) {
            int row = r+dir[j][0]*i;
            int col = c+dir[j][1]*i;
            if(row>=0 && row<N && col>=0 && col<N) board[row][col] -= 1;
        }
    }
}
void dfs(int depth) {
    // cout << "++++++++dfs++++++++\n";
    // printBoard();
    if(depth==N) {
        // printStack(s);
        cnt++;
    }
    else {
        pair<int, int> x = s.top();
        for(int i=x.first; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(board[i][j]!=0) continue;
                // cout << depth << " (" << i << ", " << j << ")\n";
                queen(i,j);
                s.push(make_pair(i,j));
                dfs(depth+1);
                s.pop();
                unQueen(i,j);
            }
        }
    }
}
int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        for(int j=i; j<N; j++) {
            // cout << "===========(" << i << "," << j << ")==========\n";
            s.push(make_pair(i,j));
            queen(i,j);
            dfs(1);
            s.pop();
            unQueen(i,j);
            // cout << "end i,j\n";
            // printBoard();
        }
    }
    // for(int i=1; i<=N; i++) cnt /= i;
    cout << cnt;
} 