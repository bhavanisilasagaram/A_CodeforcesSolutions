#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
bool isprime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main() {
fastio;
int a,b;
cin>>a>>b;
//i need to get the first prime number after a.
int ans;
for(int i=a+1;i<b+1;i++){
    if(isprime(i)==true){
        ans=i;
        break;
    }
}
if(ans==b){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}