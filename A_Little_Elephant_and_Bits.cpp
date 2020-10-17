#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string num;
cin>>num;
if(count(num.begin(),num.end(),'0')!=0)cout<<"1";
int flag=1;
for(int i=1;i<num.length();i++){
    //cout<<"num[i]"<<num[i]<<" ";
    if(num[i]=='0'&&flag==1){
        flag=0;
        continue;
    }
    else cout<<num[i];
}
return 0;
}