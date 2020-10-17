#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
    int a;int b;
    cin>>a>>b;
    int rem=6-max(a,b)+1;
    cout<<rem/__gcd(rem,6)<<"/"<<6/__gcd(rem,6);
return 0;
}