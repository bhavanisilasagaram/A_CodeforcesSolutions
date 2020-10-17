#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    bool flag=false;
    ll num;
    cin>>num;
    ll a[num];
    for(ll i=0;i<num;i++)cin>>a[i];
    ll prv=a[0];
    for(ll i=1;i<num;i++){
        if(a[i]>=prv){
            flag=true;
        }
        prv=a[i];
    }
    if(flag==true)cout<<"YES";
    else cout<<"NO"; 
    cout<<endl;
}
return 0;
}