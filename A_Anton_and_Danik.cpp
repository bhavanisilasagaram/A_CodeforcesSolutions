#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
    int num;
    cin>>num;
    string str;
    cin>>str;
    if(count(str.begin(),str.end(),'A')>count(str.begin(),str.end(),'D')){
        cout<<"Anton";
    }
    else if(count(str.begin(),str.end(),'A')<count(str.begin(),str.end(),'D')){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
return 0;
}