// BOJ18111_마인크래프트
// 2868KB
// 128ms
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N,M,B,ans=0,minBlock=257,maxBlock=0,build,remove,minTime=1000000000,maxHeight=0;
    cin >> N >> M >> B;
    int ground[N*M];
    for(int i=0; i<N*M; i++) {
            cin >> ground[i];
            minBlock = min(minBlock,ground[i]);
            maxBlock = max(maxBlock,ground[i]);
    }
    for(int h=minBlock; h<=maxBlock; h++) {
        build = remove = 0;
        for(int i=0; i<N*M; i++) {
            if(ground[i]>h) remove += ground[i]-h;
            else build += h-ground[i];
        }
        if(remove+B >= build) {
            int time = remove*2+build;
            if(minTime >= time) {
                minTime = time;
                maxHeight = h;
            }
        }
    }
    cout << minTime << " " << maxHeight;
}