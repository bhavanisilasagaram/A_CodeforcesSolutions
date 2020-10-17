#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main(){
int num;
int k;
cin>>num>>k;
vector<int>v;
for(int i=0;i<(num*2)+1;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
for(int i=1;i<(2*num)+1;i+=2){
    if(k>0){
        if(v[i-1]<(v[i]-1)&&(v[i+1]<(v[i]-1))){
            v[i]--;
            k--;
        }
    }
}
for(int i=0;i<(2*num)+1;i++){
    cout<<v[i]<<" ";
}

return 0;
}