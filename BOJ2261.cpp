#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    vector< pair<int,int> > coor(n);
    for(int i=0; i<n; i++) cin >> coor[i].first >> coor[i].second;
    for(int i=0; i<n; i++) cout << coor[i].first <<" " << coor[i].second << endl;

} 