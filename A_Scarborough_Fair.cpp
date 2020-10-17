#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a,b;cin>>a>>b;
string str;cin>>str;
vector<char>v(str.begin(),str.end());
while(b--){
    int start,end;
    char prv,now;
    cin>>start>>end>>prv>>now;//check down here later
    for(int j=start-1;j<=end-1;j++){
        if(v[j]==prv){
            v[j]=now;
        }
    }
}
for(auto ele:v){
    cout<<ele;
}
return 0;
}