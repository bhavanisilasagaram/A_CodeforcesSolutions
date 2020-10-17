#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll a;ll b;ll c;
    cin>>a>>b>>c;
    ll coals=b*c;
    ll val = ( (c+coals-1)/ (a-1)) + (((c+coals-1) % (a-1)) != 0); 
    cout<<val+c<<endl;
}
return 0;
}