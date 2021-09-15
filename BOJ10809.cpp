// BOJ10809_알파벳 찾기
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(char i='a'; i<='z'; i++) {
        auto k = find(s.begin(),s.end(),i);
        if(k!=s.end()) cout << k-s.begin();
        else cout << -1;
        cout << " ";
    }
}