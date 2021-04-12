// BOJ2775_부녀회장이 될테야
// 2016KB
// 204ms
#include <bits/stdc++.h>
using namespace std;
int fx(int floor, int room) {
    if(!floor) return room;
    int cnt = 0;
    for(int i=1; i<=room; i++) {
        cnt += fx(floor-1, i);
    }
    return cnt;
}
int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        int n,k;
        cin >> k >> n;
        cout << fx(k,n) << "\n";
    }
}