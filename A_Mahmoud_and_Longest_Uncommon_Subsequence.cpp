#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string str1;
cin>>str1;
string str2;
cin>>str2;
if(str1==str2)cout<<"-1"<<endl;
else cout<<max(str1.length(),str2.length());
return 0;
}