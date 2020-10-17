#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a;
int b;
int c;
cin>>a>>b>>c;
vector<int>v;
for(int i=0;i<a;i++){
    int ele;
    cin>>ele;
    if(ele<=b)v.push_back(ele);
}
int sum=0;
int cnt=0;
for(int i=0;i<v.size();i++){
    sum+=v[i];
    if(sum>c){
        cnt++;
        sum=0;
    }
}
cout<<cnt;
return 0;
}