// BOJ1541_잃어버린 괄호
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
string s;
vector<int> v, u;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    getline(cin,s);
    char *s_buff = new char[50];
    strcpy(s_buff, s.c_str());
    char *ptr = strtok(s_buff,"+-");
    while(ptr != NULL) {
        v.push_back(stoi(ptr));
        ptr = strtok(NULL, "+-");
    }
    int k=0, subsum=v[0];
    for(int i=0; i<s.size(); i++) {
        if(s[i]!='+' && s[i]!='-') continue;
        k++;
        if(s[i]=='+') subsum += v[k];
        else {
            u.push_back(subsum);
            subsum=v[k];
        }
    }
    u.push_back(subsum);
    int ans = u[0];
    for(int i=1; i<u.size(); i++) ans -= u[i];
    cout << ans;
}