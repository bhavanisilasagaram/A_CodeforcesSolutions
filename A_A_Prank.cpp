#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;cin>>num;
vector<int>arr;

arr.push_back(0);
for(int i=0;i<num;i++){
    int y;cin>>y;
    arr.push_back(y);
}
arr.push_back(1001);
int cnt=0;
int prvcnt=0;
for(int i=1;i<arr.size()-1;i++){
    if((arr[i]==(arr[i-1]+1))&&(arr[i]==(arr[i+1]-1))){
        cnt++;
    }
    else{
        prvcnt=max(prvcnt,cnt);
        cnt=0;
    }
}
prvcnt=max(prvcnt,cnt);
cout<<prvcnt;
return 0;
}