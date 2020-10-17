#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;cin>>num;
int rem=num%4;
if(rem==1){
    cout<<"0 A";
}else if(rem==2){
    cout<<"1 B";
}else if(rem==3){
    cout<<"2 A";
}
else{
    cout<<"1 A"; 
}
return 0;
}