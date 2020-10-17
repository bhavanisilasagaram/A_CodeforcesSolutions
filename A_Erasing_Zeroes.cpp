#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    string s;cin>>s;
    vector<int>v;
    int num=0;
    bool isone=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            v.push_back(num);
            num=0;
            isone=true;
        }
        
        if(s[i]=='0'&&isone==true){
                num++;
            }
        

    }
    int sum=0;
    if(v.empty()){
        v.push_back(0);
    }
 
    for(auto ele:v){
        sum+=ele;
    }
    cout<<sum<<endl;
}
return 0;
}