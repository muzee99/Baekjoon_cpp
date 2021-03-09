// BOJ5086_배수와 약수
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int first,second;
    while(1) {
        cin >> first >> second;
        if(!first && !second) break;
        if(first<second && !(second%first)) cout << "factor\n";
        else if(first>second && !(first%second)) cout << "multiple\n";
        else cout << "neither\n";
    }
}