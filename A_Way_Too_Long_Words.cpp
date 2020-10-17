#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    string str;
    cin>>str;
    if(str.length()>10){
        cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    }
    else{
        cout<<str<<endl;
    }
}
return 0;
}