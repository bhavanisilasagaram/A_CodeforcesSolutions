#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string bal;
string p;
cin>>bal>>p;

int lsum=0;
int rsum=0;
int flag=true;
int j=1;
int po=p.length();
for(int i=0;i<bal.length();i++){
    if(bal[i]=='|')flag=false;
    else if(flag!=false){
        lsum+=j;
    }
    else{
        rsum+=j;
    }
}

int needoneach=(lsum+rsum+po)/2;
if(needoneach<lsum||needoneach<rsum||(lsum+rsum+po)%2==1){
    cout<<"Impossible";
}
else{
    int nol=needoneach-lsum;
    for(int i=0;i<nol;i++){
        cout<<p[i];
    }
    cout<<bal;
    for(int i=nol;i<po;i++){
        cout<<p[i];
    }
}
return 0;
}