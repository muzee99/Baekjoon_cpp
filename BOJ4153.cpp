// BOJ4153_직각 삼각형
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    while(1) {
        vector<int> side(3);
        cin >> side[0] >> side[1] >> side[2];
        if(!side[0] && !side[1] && !side[2]) break;
        sort(side.begin(), side.end());
        if(side[0]+side[1] < side[2]) cout << "wrong\n";
        else if(side[0]*side[0] + side[1]*side[1] == side[2]*side[2]) cout << "right\n";
        else cout << "wrong\n";
    }
}