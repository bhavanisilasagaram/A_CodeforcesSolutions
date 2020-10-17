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
    set<ll>s;
    for(ll i=0;i<num;i++){
        ll ele;
        cin>>ele;
        if(ele!=0)s.insert(ele);
    }
    cout<<s.size()<<endl;
}
return 0;
}