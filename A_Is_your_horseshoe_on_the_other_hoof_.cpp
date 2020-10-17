#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
map<int, int>m;
ll a[4];
for(ll i=0;i<4;i++){
    cin>>a[i];
    m[a[i]]++;
}
ll cnt=0;
for(auto it:m){
    if(it.second>1){
        cnt+=(it.second-1);
    }
}
cout<<cnt;
return 0;
}