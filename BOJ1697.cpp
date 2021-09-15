// BOJ1697_숨바꼭질
// 2544KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int N,K,cnt=0;
int line[100001] = {0,};
void bfs() {
    queue<int> q;
    q.push(N);
    line[N] = 1;
    while(!q.empty()) {
        int size = q.size();
        for(int i=0; i<size; i++) {
            int x = q.front();
            q.pop();
            if(x==K) return;
            if(!line[x+1] && x+1>=0 && x+1<100001) {
                line[x+1] = 1;
                q.push(x+1);
            }
            if(!line[x-1] && x-1>=0 && x-1<100001) {
                line[x-1] = 1;
                q.push(x-1);
            }
            if(!line[x*2] && x*2>=0 && x*2<100001) {
                line[x*2] = 1;
                q.push(x*2);
            }
        }
        cnt++;
    }
}
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> N >> K;
    bfs();
    cout << cnt;
}