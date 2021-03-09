// BOJ18258_큐2
// 8512KB
// 416ms
#include <bits/stdc++.h>
using namespace std;
int N, k;
string tok[6] = {"push", "pop", "size", "empty", "front", "back"};
queue<int> q;
int getToken(string t) {
    for(int i=0; i<6; i++) 
        if(!t.compare(tok[i])) return i;
}
void Q(int t) {
    switch(t) {
        case 0:
            q.push(k);
            break;
        case 1:
            if(q.empty()) cout << "-1\n";
            else {
                cout << q.front() << "\n"; 
                q.pop();
            }
            break;
        case 2:
            cout << q.size() << "\n";
            break;
        case 3:
            cout << q.empty() << "\n";
            break;
        case 4:
            if(q.empty()) cout << "-1\n";
            else cout << q.front() << "\n";
            break;
        case 5:
            if(q.empty()) cout << "-1\n";
            else cout << q.back() << "\n";
            break;
        default:
            break;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i=0; i<N; i++) {
        string token;
        cin >> token;
        if(!token.compare("push")) cin >> k;
        Q(getToken(token));
    }
}