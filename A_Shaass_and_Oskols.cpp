#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
vector<int>v;
v.push_back(0);
for(int i=0;i<num;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
v.push_back(0);
int q;
cin>>q;
while(q--){
    int a,b;
    cin>>a>>b;
    v[a-1]+=(b-1);
    v[a+1]+=(v[a]-b);
    v[a]=0;
}
for(int i=1;i<=num;i++){
    cout<<v[i]<<endl;
}

return 0;
}