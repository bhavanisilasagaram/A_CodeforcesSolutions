#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int d;
cin>>d;
int top;
cin>>top;
int bot=7-top;
bool flag=true;
for(int i=0;i<d;i++){
    int a,b;
    cin>>a>>b;
    int c=7-a;
    int d=7-b;
    if(bot==a||bot==b||bot==c||bot==d){
        flag=false;
        break;
    }
    bot=7-top;
}
if(flag==false){
    cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}