#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string s;
cin>>s;
vector<char>v;
for(int i=0;i<s.length();i++){
    if(s[i]=='+')continue;
    else{
        v.push_back(s[i]);
    }
}
sort(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++){
    cout<<v[i]<<"+";
}
cout<<v[v.size()-1];
return 0;
}