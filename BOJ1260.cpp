// BOJ1260_dfs와 bfs
// 2152KB
// 8ms
#include <bits/stdc++.h>
using namespace std;
vector<int> chk(1001);
void dfs(int a, vector<int> graph[]) {
    if(chk[a]) return;
    chk[a] = 1;
    cout << a << " ";
    for(int i=0; i<graph[a].size(); i++) {
        dfs(graph[a][i], graph);
    }
}
void bfs(int a, vector<int> graph[]) {
    queue<int> q;
    q.push(a);
    chk[a] = 1;
    cout << a << " ";
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(int i=0; i<graph[x].size(); i++) {
            int y = graph[x][i];
            if(!chk[y]) {
                q.push(y);
                chk[y] = 1;
                cout << y << " ";
            }
        }
    }
}
int main() {
    int N,M,V;
    cin >> N >> M >> V;
    vector<int> node[N+1];
    for(int i=0; i<M; i++) {
        int x,y;
        cin >> x >> y;
        node[x].push_back(y);
        node[y].push_back(x);
    }
    for(int i=1; i<N+1; i++) sort(node[i].begin(), node[i].end());
    dfs(V,node);
    cout << "\n";
    for(int i=0; i<N+1; i++) chk[i] = 0;
    bfs(V,node);
}