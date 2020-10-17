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
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    reverse(a,a+num);
    for(int i=0;i<num;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
return 0;
}