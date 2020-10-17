#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str;
string str2;
cin>>str;
cin>>str2;
bool flag=true;
for(int i=0;i<str.length();i++){
    if(tolower(str[i])<tolower(str2[i])){
        cout<<"-1"<<endl;
        flag=false;
        break;
    }
    else if(tolower(str[i])>tolower(str2[i])){
        cout<<"1"<<endl;
        flag=false;
        break;
    }
}
if(flag==true){
    cout<<"0"<<endl;
}

return 0;
}