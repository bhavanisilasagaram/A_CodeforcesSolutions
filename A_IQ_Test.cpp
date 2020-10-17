#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
vector<string>v;
for(int i=0;i<4;i++){
    string el;
    cin>>el;
    v.push_back(el);
}
bool flag=false;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        vector<char>vv;
        vv.push_back(v[i][j]);
        vv.push_back(v[i+1][j]);
        vv.push_back(v[i][j+1]);
        vv.push_back(v[i+1][j+1]);
        int hash=count(vv.begin(),vv.end(),'#');
        int dot=count(vv.begin(),vv.end(),'.');
        if(hash>=3||dot>=3){
            flag=true;
        }
    }
}
if(flag==true)cout<<"YES";
else{
    cout<<"NO";
}
return 0;
}