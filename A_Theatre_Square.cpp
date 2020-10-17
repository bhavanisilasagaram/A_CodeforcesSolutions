#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll a,b,c;
cin>>a>>b>>c;
ll na,nb;
if(a%c!=0) na=((a/c)*c)+c;
else na=a;
if(b%c!=0) nb=((b/c)*c)+c;
else nb=b;
cout<<(na*nb)/(c*c);
return 0;
}