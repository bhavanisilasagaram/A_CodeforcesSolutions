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
    map<char,int>m;
    for(int i=0;i<num;i++){
        string t;
        cin>>t;
        for(int i=0;i<t.length();i++){
            m[t[i]]++;
        }
    }
    int flag=1;
    for(auto ele:m){
        if(ele.second%num!=0){
            flag=0;
        }
    }
    if(flag==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}