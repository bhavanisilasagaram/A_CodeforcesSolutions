#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
int rem_spaces=num-a-c-e;
int k=min(b-a,rem_spaces);
a+=k;
rem_spaces-=k;
int j=min(d-c,rem_spaces);
c+=j;
rem_spaces-=j;
e+=rem_spaces;
cout<<a<<" "<<c<<" "<<e;
return 0;
}