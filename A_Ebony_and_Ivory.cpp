#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
ll gcdiv(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return gcdiv(b,a%b);
    }
}
//using linear diphthane equation:
int main() {
fastio;
ll a,b,c;
cin>>a>>b>>c;
ll gcd=gcdiv(a,b);
if(c%gcd==0){
    cout<<"Yes";
}
else{
    cout<<"No";
}
return 0;
}