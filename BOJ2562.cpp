// BOJ2562_최댓값
// 2016KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v(9);
    for(int i=0; i<9; i++) cin >> v[i];
    cout << *max_element(v.begin(), v.end()) << "\n";
    cout << max_element(v.begin(), v.end())-v.begin()+1;
}