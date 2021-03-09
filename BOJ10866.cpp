// BOJ10866_덱
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
int N, k;
deque<int> dq;
string tok[8] = {"push_front", "push_back", "pop_front", "pop_back",
                "size", "empty", "front", "back"};
int getToken(string t) {
    for(int i=0; i<8; i++) 
        if(!t.compare(tok[i])) return i;
}
void DQ(int t) {
    switch(t) {
        case 0:
            dq.push_front(k);
            break;
        case 1:
            dq.push_back(k);
            break;
        case 2:
            if(dq.empty()) cout << "-1\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            break;
        case 3:
            if(dq.empty()) cout << "-1\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            break;
        case 4:
            cout << dq.size() << "\n";
            break;
        case 5:
            cout << dq.empty() << "\n";
            break;
        case 6:
            if(dq.empty()) cout << "-1\n";
            else cout << dq.front() << "\n";
            break;
        default:
            if(dq.empty()) cout << "-1\n";
            else cout << dq.back() << "\n";
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
        int t = getToken(token);
        if(t==0 || t==1) cin >> k;
        DQ(t);
    }
}