// BOJ1655_가운데를 말해요
// 2832KB
// 28ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int N;
    cin >> N;
    priority_queue<int, vector<int>, less<int> > maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    int x, mid;
    cin >> x;
    maxHeap.push(x);
    cout << maxHeap.top() << "\n";
    for(int i=0; i<N-1; i++) {
        cin >> x;
        if(maxHeap.top()<x) minHeap.push(x);
        else maxHeap.push(x);
        if(minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        else if(minHeap.size() < maxHeap.size()-1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        cout << maxHeap.top() << "\n";
    }
}