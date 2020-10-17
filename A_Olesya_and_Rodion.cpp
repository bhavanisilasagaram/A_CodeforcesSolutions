#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll n;ll t;
cin>>n>>t;
if(t==10){
    if(n==1)cout<<"-1";
    else{
    cout<<"1";
    for(ll i=0;i<n-1;i++){
        cout<<"0";
    }
    }
}
else{
    for(ll i=0;i<n;i++){
        cout<<t;
    }
}
return 0;
}