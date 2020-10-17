#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll num;
cin>>num;
string s;
cin>>s;
vector<ll>l;
vector<ll>r;
ll a[num];
for(ll i=0;i<num;i++){
    cin>>a[i];
}
ll minn=LONG_LONG_MAX;
for(int i=0;i<num-1;i++){
    if(s[i]=='R'&&s[i+1]=='L'){
        minn=min(minn,(a[i+1]-a[i])/2);
    }
}
if(minn!=LONG_LONG_MAX) cout<<minn;
else cout<<"-1";
return 0;
}