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
    int a[num];
    vector<int>v;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    int ones=0;
    int size=0;
    for(int i=0;i<num;i++){
        if(a[i]==1){
            ones++;
        }
        else if(a[i]==0){
            if(ones>0) {
                v.push_back(ones-ones%2);
                size+=(ones-ones%2);
            }
            ones=0;
            v.push_back(-1);
            size++;
        
        }
    }
    if(ones>0) {
        v.push_back(ones-ones%2);
        size+=(ones-ones%2);
    }
    cout<<size<<endl;
    for(int i=0;i<v.size();i++){
        if(v[i]==-1) cout<<"0 ";
        else{
            for(int j=0;j<v[i];j++){
                cout<<"1 ";
            }
        }
    }
    cout<<endl;

}
return 0;
}