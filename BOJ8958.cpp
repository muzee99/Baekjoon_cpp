// BOJ8958_OX퀴즈
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        int cnt = 1, score=0;
        for(int j=0; j<s.size(); j++) {
            if(s[j]=='O') score += cnt++;
            else cnt = 1;
        }
        cout << score << "\n";
    }
}