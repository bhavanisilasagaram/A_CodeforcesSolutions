#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll num;
ll a;
cin>>num>>a;
ll arr[num];
for(ll i=0;i<num;i++){
    char sign;
    ll num;
    cin>>sign>>num;
    if(sign=='+'){
        arr[i]=num;
    }
    else{
        arr[i]=(-num);
    }
}
ll sum=a;
ll cnt=0;
for(ll i=0;i<num;i++){
    if(sum+arr[i]>=0){
        sum+=arr[i];
    }
    else{
        cnt++;
    }

}
cout<<sum<<" "<<cnt;
return 0;
}