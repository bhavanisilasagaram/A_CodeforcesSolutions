#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
string s;
cin>>s;
int cnt=0;
for(int i=1;i<num;i++){
    if(s[i-1]==s[i]){
        cnt++;
    }
}
cout<<cnt;
return 0;
}