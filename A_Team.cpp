#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
    int num;
    cin>>num;
    int ans=0;
    for(int i=0;i<num;i++){
        int a=0;
        int b=0;
        int c=0;
        
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans;
return 0;
}