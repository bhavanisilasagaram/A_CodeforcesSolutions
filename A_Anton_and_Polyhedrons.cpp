#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
ll sum=0;
while(t--){
 string s;
 cin>>s;
 if(s=="Tetrahedron"){
     sum+=4;
 }
 else if(s=="Cube"){
     sum+=6;
 }
 else if(s=="Octahedron"){
     sum+=8;
 }
 else if(s=="Dodecahedron"){
     sum+=12;
 }
 else{
     sum+=20;
 }
}
cout<<sum;
return 0;
}