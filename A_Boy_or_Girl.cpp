#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
string per;
cin>>per;
set<int>s;
for(int i=0;i<per.size();i++){
    s.insert(per[i]);
}
if(s.size()%2)cout<<"IGNORE HIM!";
else cout<<"CHAT WITH HER!";
return 0;
}