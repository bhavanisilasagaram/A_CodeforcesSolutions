#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a,b,c,d;
cin>>a>>b>>c>>d;
string s;cin>>s;
int aa=count(s.begin(),s.end(),'1');
int bb=count(s.begin(),s.end(),'2');
int cc=count(s.begin(),s.end(),'3');
int dd=count(s.begin(),s.end(),'4');
cout<<aa*a+bb*b+cc*c+dd*d;
return 0;
}