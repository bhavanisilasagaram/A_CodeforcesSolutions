#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(b>a){
        cout<<b-a<<endl;
    }
    else{
        if((a-b)%2==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}
return 0;
}