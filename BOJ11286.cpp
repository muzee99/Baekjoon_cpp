// BOJ11286_절댓값 힙
// 2412KB
// 940ms
#include <bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(int a, int b) {
        if(abs(a)==abs(b)) return a>b;
        return abs(a)>abs(b);
    }
};
int main() {
    int N;
    priority_queue<int, vector<int>, compare> pq;
    cin >> N;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        if(!x) {
            if(pq.empty()) cout << "0\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
            continue;
        }
        pq.push(x);
    }
}