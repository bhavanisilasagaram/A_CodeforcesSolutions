#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a,b;
cin>>a>>b;
bool flag=false;
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        char ele;
        cin>>ele;
        if(ele!='W'&&ele!='B'&&ele!='G'){
            flag=true;
        }
    }
}
if(flag==true){
    cout<<"#Color";
}
else{
    cout<<"#Black&White";
}
return 0;
}