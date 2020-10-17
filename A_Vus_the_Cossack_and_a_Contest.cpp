#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a,b,c;
cin>>a>>b>>c;
if(a<=min(b,c)){
    cout<<"Yes";
}else{
    cout<<"No";
}
return 0;
}