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
int b[num];
for(int i=0;i<num;i++){
    cin>>a[i];
    b[a[i]-1]=i+1;
}
for(int i=0;i<num;i++){
    cout<<b[i]<<" ";
}
return 0;
}