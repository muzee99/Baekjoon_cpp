// BOJ2164_카드2
// 4036KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
int N;
queue<int> q;
int main() {
    cin >> N;
    for(int i=1; i<=N; i++) q.push(i);
    while(q.size()!=1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}