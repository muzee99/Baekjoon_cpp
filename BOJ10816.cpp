#include <bits/stdc++.h>
using namespace std;
int N, M, num;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    vector<int> card(N);
    for(int i=0; i<N; i++) cin >> card[i];
    sort(card.begin(), card.end());
    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> num;
        int left=0, right=N-1, cnt=0;
        while(left<=right) {
            int mid = (right+left)/2;
            if(card[mid]>num) right = mid-1;
            else if(card[mid]<num) left = mid+1;
            else {
                cnt++;
                card.erase(card.begin()+mid);
                left=0,right=(--N)-1;
            }
        }
        cout << cnt << " ";
    }
}