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
    string n;
    int sso=0;
    int rro=0;
    int rre=0;
    vector<char>ss;
    vector<char>rr;
    cin>>n;
    int sse=0;
    for(int i=0;i<num;i++){
        if(i%2==0){
            rr.push_back(n[i]);
        }
        else{
            ss.push_back(n[i]);
        }
    }
    if(num%2==0){
        for(int i=0;i<ss.size();i++){
            //cout<<ss[i]-'0';
            if((ss[i]-'0')%2!=0)sso++;
            else{
                sse++;
            }
        }
        //cout<<"sse is"<<sse;
        if(sse>0){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    else{
        for(int i=0;i<rr.size();i++){
            if((rr[i]-'0')%2!=0)rro++;
            else{
                rre++;
            }
        }
        if(rro>0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    }
return 0;
}