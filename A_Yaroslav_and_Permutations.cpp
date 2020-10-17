#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
map<int,int>m;
int maxx=0;
int ans=0;
for(int i=0;i<num;i++){
    int ele;
    cin>>ele;
    m[ele]++;
    if(m[ele]>maxx){
        maxx=m[ele];
        ans=ele;
    }
}
if((num-maxx)<(maxx-1)){
    cout<<"NO";
}
else{
    cout<<"YES";
}


return 0;
}