#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
if(t%2==0)cout<<t+(-1)*t/2;
else cout<<(-1)*(t+1)/2;
return 0;
}