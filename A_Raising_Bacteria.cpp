#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string bin;
cin>>bin;
int cnt=0;
for(int i=0;i<bin.length();i++){
    int p = pow(2,i)*(bin[i]-'0');
    cnt+=p;
}
int j=0;
for(int i=cnt;i>0;i--){
    cnt/=4;
    j++;
}
cout<<j;
}