// BOJ1764_듣보잡
// 12992KB
// 60ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int N,M,cnt=0;
    string name;
    cin >> N >> M;
    map<string,int> noHear;
    vector<string> noHearAndSee;
    for(int i=0; i<N; i++) {
        cin >> name;
        noHear[name] = 1;
    }
    for(int i=0; i<M; i++) {
        cin >> name;
        if(!noHear[name]) continue;
        cnt++;
        noHearAndSee.push_back(name);
    }
    cout << cnt << "\n";
    sort(noHearAndSee.begin(), noHearAndSee.end());
    for(auto k:noHearAndSee) {
        cout << k << "\n";
    }
}