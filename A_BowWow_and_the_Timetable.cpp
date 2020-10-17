#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string bin;
cin>>bin;
reverse(bin.begin(),bin.end());
int cnt=0;
for(int i=0;i<bin.length();i++){
    int k =(bin[i]-'0');
    cout<<k<<" ";
    int p = pow(2,i)*k;
    cout<<p<<endl;
    cnt+=p;
}
cout<<" final cnt is"<<cnt<<endl;
int j=0;
while(cnt>=4){
    cnt/=4;
    j++;
}
cout<<j;
}