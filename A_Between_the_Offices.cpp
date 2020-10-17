#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
string str;cin>>str;
int stof=0,ftos=0;
for(int i=0;i<str.size()-1;i++){
    if(str[i]=='S'&&str[i+1]=='F'){
        stof++;
    }
    else if(str[i]=='F'&&str[i+1]=='S'){
        ftos++;
    }
}
if(stof>ftos)cout<<"YES";
else cout<<"NO";
return 0;
}