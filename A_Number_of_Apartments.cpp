#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int num;
    cin>>num;
    int a=0;
    int b=0;
    int c=0;
    if(num%7==0){
        c=num/7;
    }
    else if(num%5==0){
        b=num/5;
    }
    else if((num%3)==0){
        a=num/3;
    }
    

    }
    

    
}
return 0;
}