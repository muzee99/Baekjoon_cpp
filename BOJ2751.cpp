#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> v;
void merge(int B, int E) {
    int mid = (B+E)/2;
    vector<int> sub;
    int left=B, right=mid+1, i=B;
    while(left<=mid && right<=E) {
        if(v[left]<v[right]) sub.push_back(v[left++]);
        else sub.push_back(v[right++]);
    }
    while(left<=mid) sub.push_back(v[left++]);
    while(right<=E) sub.push_back(v[right++]);
    copy(sub.begin(), sub.end(), v.begin()+B);
}
void dAq(int B, int E) {
    if(B<E) {
        dAq(B, (B+E)/2);
        dAq((B+E)/2+1, E);
        merge(B,E);
    }
}
int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    dAq(0,N-1);
    for(auto k:v) cout << k << "\n";
}