#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
vector<int>x;
vector<int>y;
vector<int>z;
int a[num];
for(int i=0;i<num;i++){
    cin>>a[i];
    if(a[i]==1){
        x.push_back(i);
    }
    else if(a[i]==2){
        y.push_back(i);
    }
    else{
        z.push_back(i);
    }
}
int i=0;
cout<<min(x.size(),min(y.size(),z.size()))<<endl;
while(i<x.size()&&i<y.size()&&i<z.size()){
    cout<<x[i]+1<<" "<<y[i]+1<<" "<<z[i]+1<<endl;
    i++;
}
return 0;
}