#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll num,q;
cin>>num>>q;
ll a;
if(num%2)a=(num+1)/2;
else a=num/2;
if(q<=a){
    cout<<1+2*(q-1);
}
else{
    cout<<2+(q-a-1)*2;
}
return 0;
}