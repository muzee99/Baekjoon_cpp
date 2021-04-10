// BOJ10250_ACM 호텔
// 2016KB
// 4ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        int H,W,N;
        cin >> H >> W >> N;
        int floor = !(N%H) ? H : N%H;
        int room = !(N%H) ? N/H : N/H+1;
        room += floor*100;
        cout << room << "\n";
    }
}