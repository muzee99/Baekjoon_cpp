// BOJ2920_음계
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int pre, asc=1;
    cin >> pre;
    if(pre!=1 && pre!=8) {
        cout << "mixed";
        return 0;
    }
    else if(pre==1) asc = 1;
    else asc = -1;
    for(int i=1; i<8; i++) {
        int uhm;
        cin >> uhm;
        pre += asc;
        if(uhm!=pre) {
            cout << "mixed";
            return 0;
        }
    }
    if(pre==1) cout << "descending";
    else cout << "ascending";
}