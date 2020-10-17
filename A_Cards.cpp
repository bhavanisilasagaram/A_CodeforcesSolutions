#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
string str;cin>>str;
int z=count(str.begin(),str.end(),'z');
int o=(t-(4*z))/3;
for(int i=0;i<o;i++){
    cout<<"1 ";
}
for(int i=0;i<z;i++){
    cout<<"0 ";
}

return 0;
}