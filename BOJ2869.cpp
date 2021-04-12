// BOJ2869_달팽이는 올라가고 싶다
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int A,B,V;
    cin >> A >> B >> V;
    int allday = A-B;
    int ans;
    if(A>=V) cout << 1;
    else {
        if(V-A >= allday) {
            ans = (V-A)/allday;
            if((V-A)%allday) ans++;
        }
        else ans = 1;
        cout << ++ans;
    }
}