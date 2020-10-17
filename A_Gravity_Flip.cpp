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
for(int i=0;i<num;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}
sort(v.begin(),v.end());
for(int e:v){
    cout<<e<<" ";
}
return 0;
}