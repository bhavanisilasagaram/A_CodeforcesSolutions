#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll num;
    cin>>num;
    ll a[num];
    for(ll i=0;i<num;i++){
        cin>>a[i];
    }
    ll flag=0;
    for(ll j=0;j<num-2;j++){
        if(a[j]+a[j+1]<=a[num-1]){
            cout<<j+1<<" "<<j+2<<" "<<num<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }
}
return 0;
}