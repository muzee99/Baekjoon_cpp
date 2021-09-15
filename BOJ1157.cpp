// BOJ1157_단어 공부
// 3684KB
// 32ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    map<char,int> count;
    int maxCount = 0;
    int maxDuplicate = 0;
    char maxChar;
    cin >> s;
    for(auto k:s) {
        if(k>='a' && k<='z') count[k] += 1;
        else {
            char a = k+32;
            count[a] += 1;
        }
    }
    for(char i='a'; i<='z'; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDuplicate=0;
            maxChar = i;
        }
        else if(count[i] == maxCount) maxDuplicate++;
    }
    maxChar -= 32;
    if(!maxDuplicate) cout << maxChar;
    else cout << "?";
}