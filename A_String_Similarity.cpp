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
    string s;
    cin>>s;
    for(int i=0;i<s.length();i+=2){
        cout<<s[i];
    }
    cout<<endl;
}
return 0;
}