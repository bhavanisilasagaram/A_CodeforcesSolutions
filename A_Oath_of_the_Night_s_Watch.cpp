#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll num;
cin>>num;
ll a[num];
for(ll i=0;i<num;i++){
    cin>>a[i];
}
sort(a,a+num);
ll cnt=0;
for(ll i=1;i<num-1;i++){
    if((a[0]<a[i])&&(a[i]<a[num-1])){
        cnt++;
        //cout<<a[i]<<a[i-1]<<a[i+1]<<endl;

    }
}
if(a[0]==a[num-1])cout<<"0";
else cout<<cnt;
return 0;
}