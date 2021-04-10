// BOJ1259_팰린드롬수
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    while(1) {
        string s;
        cin >> s;
        if(s=="0") break;
        int i=0;
        for(i=0; i<s.size()/2; i++) 
            if(s[i] != s[s.size()-i-1]) break;
        if(i==s.size()/2) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}