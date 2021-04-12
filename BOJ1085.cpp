// BOJ1085_직사각형에서 탈출
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    cout << min(min(x,w-x),min(y,h-y));
}