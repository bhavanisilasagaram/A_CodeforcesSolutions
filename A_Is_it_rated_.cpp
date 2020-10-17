#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
bool flag=false;
int prva = INT_MAX;
bool greater=false;
for(int i=0;i<num;i++){
    int a;int b;
    cin>>a>>b;
    if(a!=b){
        cout<<"rated";
        flag=true;
        break;
    }
    else{
        if(a>prva){
            greater=true;
        }
        else{
            prva=a;
        }
    }
}
if(flag==false){
    if(greater==true)cout<<"unrated";
    else{
        cout<<"maybe";
    }
}
return 0;
}