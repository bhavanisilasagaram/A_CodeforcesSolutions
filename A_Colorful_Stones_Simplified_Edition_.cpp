#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str;
cin>>str;
string str1;
cin>>str1;
int cnt=1;
int j=0;
for(int i=0;i<str1.length();i++){
    if(str1[i]==str[j]){
        cnt++;
        j++;
    }
}
cout<<cnt;
return 0;
}