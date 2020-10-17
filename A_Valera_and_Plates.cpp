#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int n,avb,avp;
cin>>n>>avb>>avp;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
int b=count(a,a+n,1);
int pb=count(a,a+n,2);
int remones=max(0,(avb-b));
int neededones=max(0,(b-avb));
int neededtwos=max(0,pb-(remones+avp));
cout<<neededones+neededtwos;

return 0;
}

