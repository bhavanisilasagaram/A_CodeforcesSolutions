#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
int prv=0;
string ans;
map<string,int>m;
while(t--){
    string str;
    cin>>str;
    m[str]++;
    if(m[str]>prv){
        prv=m[str];
        ans=str;
    }
}
cout<<ans;
return 0;
}