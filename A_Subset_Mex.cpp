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
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    sort(a,a+num);
    for(int i=0;i<num;i++){
        if(a[i]==a[i+1]){
            v1.push_back(a[i]);
            v2.push_back(a[i+1]);
        }
        else{
            v1.push_back(a[i]);
        }
    }
    int sum=0;
    for(int j=0;j<INT_MAX;j++){
        if(find(v1.begin(),v1.end(),j)==v1.end()){
            sum+=j;
            break;
        }
    }
    for(int j=0;j<INT_MAX;j++){
        if(find(v2.begin(),v2.end(),j)==v2.end()){
            sum+=j;
            break;
        }
    }
    cout<<sum<<endl;
}
return 0;
}