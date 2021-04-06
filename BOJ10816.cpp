// BOJ10816_숫자 카드 2
// 25252KB
// 656ms
#include <bits/stdc++.h>
using namespace std;
int N, M, num;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    map<int,int> card;
    for(int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        if(!card.count(temp)) card[temp] = 1;
        else card[temp]++;
    }
    vector< pair<int,int> > v(card.size());
    for(auto i=card.begin(); i!=card.end(); i++) v.push_back(make_pair(i->first, i->second));
    for(int i=0; i<card.size(); i++) cout << v[i].first << " " << v[i].second << "\n";
    // cin >> M;
    // for(int i=0; i<M; i++) {
    //     cin >> num;
    //     int left=0, right=v.size()-1;
    //     while(left<=right) {
    //         int mid = (left+right)/2;
    //         if(v[mid].first<num) left = mid+1;
    //         else if(v[mid].first>num) right = mid-1;
    //         else cout << v[mid].second << " ";
    //     }
    // }
}