// BOJ10845_큐
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int N;
    cin >> N;
    queue<int> q;
    for(int i=0; i<N; i++) {
        string s;
        int k;
        cin >> s;
        if(s=="push") {
            cin >> k;
            q.push(k);
        }
        else if(s=="size") cout << q.size() << "\n";
        else if(s=="empty") cout << q.empty() << "\n";
        else if(q.empty()) cout << -1 << "\n";
        else if(s=="pop") {
            cout << q.front() << "\n";
            q.pop();
        }
        else if(s=="front") cout << q.front() << "\n";
        else if(s=="back") cout << q.back() << "\n";
    }   
}