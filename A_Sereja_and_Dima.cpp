#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int a[num];
vector<int>v;
for(int i=0;i<num;i++){
    cin>>a[i];
}
int sum1=0;
int sum2=0;
int l=0;
int r=num-1;
while(l<=r){
    if(a[l]>a[r]){
        
        v.push_back(a[l]);
        l++;
    }
    else if(a[l]<=a[r]){
        
        v.push_back(a[r]);
        r--;
    }
}
for(int i=0;i<v.size();i++){
    if(i%2==0)sum1+=v[i];
    else sum2+=v[i];
}
cout<<sum1<<" "<<sum2;
return 0;
}