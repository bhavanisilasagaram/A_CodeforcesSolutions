#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
string str;
cin>>str;
set<char>s;
for(int i=0;i<str.length();i++){
    char ch=tolower(str[i]);
    s.insert(ch);
}
if(s.size()==26){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}