// BOJ15829_Hashing
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    int L, M=1234567891;
    long long ans=0,r=1;
    string s;   
    cin >> L >> s;
    for(int i=0; i<L; i++) {
        int x = s[i]-'a'+1;
        ans += (x*r)%M;
        r = (r*31)%M;
    }
    cout << ans%M;
}