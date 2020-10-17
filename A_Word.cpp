#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str;
cin>>str;
int u=0;
int l=0;
for(int i=0;i<str.length();i++){
    if(isupper(str[i]))u++;
    else l++;
}
//cout<<u<<l;
char ch;
if(u>l){
    for(int i=0;i<str.length();i++){
        ch=toupper(str[i]);
        cout<<ch;
    }
    cout<<endl;
}
else{
    for(int i=0;i<str.length();i++){
        ch=tolower(str[i]);
        cout<<ch;
    }
    cout<<endl;
}
return 0;
}