// BOJ10818_최소, 최대
// 5924KB
// 120ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];
    cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end());
}