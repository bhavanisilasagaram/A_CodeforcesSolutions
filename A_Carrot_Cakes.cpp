#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int n;
int t;
int k;
int d;
cin>>n>>t>>k>>d;
cout<<((d<(n-1)/k*t)?"YES":"NO");
return 0;
}