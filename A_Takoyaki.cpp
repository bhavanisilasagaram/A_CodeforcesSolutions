#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
    int a,b,c;
    cin>>a>>b>>c;
    int ans=(a/b)*c;
    ans+=(a%b!=0?c:0);
    cout<<ans;
return 0;
}