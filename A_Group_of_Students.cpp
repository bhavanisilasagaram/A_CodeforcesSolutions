#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int a[num];
int ps=0;
for(int i=0;i<num;i++){
    int t;
    cin>>t;
    ps+=t;
    a[i]=ps;
}
int aa,b;
cin>>aa>>b;
int sum=0;
int flag=0;
for(int i=0;i<num;i++){
    if(a[i]>=aa&&a[i]<=b){
        if(a[num-1]-a[i]>=aa&&a[num-1]-a[i]<=b){
            flag=1;
            cout<<i+2;
            break;
        }
    }
}
if(flag==0)cout<<"0";
return 0;
}