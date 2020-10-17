#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a;
int b;
cin>>a>>b;
int ans=0;
int last=a%10;
if(last==0)cout<<"1";
else{
    for(int i=1;i<10;i++){
        if((i*last)%10==b||(i*last)%10==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
}
return 0;
}