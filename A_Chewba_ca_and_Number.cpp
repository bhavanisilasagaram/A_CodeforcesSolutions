#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str;
vector<char>v;
cin>>str;
ll start=0;
if(str[0]=='9'){
    start=1;
    v.push_back('9');
}
for(ll i=start;i<str.length();i++){
    if(str[i]-'0'>=5){
        v.push_back(char('0'+'9'-str[i]));
    }
    else{
        v.push_back(char(str[i]));
    }
}
for(auto ch:v){
    cout<<ch;
}
return 0;
}