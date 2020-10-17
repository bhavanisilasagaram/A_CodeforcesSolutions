#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    ll diff=abs(a-b);
    ll tems=diff/10;
    if(diff%10!=0)tems++;
    cout<<tems<<endl;
}
return 0;
}