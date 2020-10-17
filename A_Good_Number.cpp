#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll num,k;
cin>>num>>k;
ll cnt=0;
set<char>ss;
vector<char>v;
for(int i=0;i<=k;i++){
    v.push_back(char(i+'0'));
}
for(ll i=0;i<num;i++){
    int u=0;
    string s;
    cin>>s;
    set<char>sett(s.begin(),s.end());
    for(auto ele:sett){
        if(ele==v[u]){
            u++;
        }
    }
    if(u==k+1){
        cnt++;
    }
}
cout<<cnt;
return 0;
}