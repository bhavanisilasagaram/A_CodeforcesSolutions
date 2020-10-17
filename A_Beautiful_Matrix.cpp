#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int x;int y;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        int ele;
        cin>>ele;
        if(ele==1){
            x=i;
            y=j;
        }
    }
}
cout<<abs(2-x)+abs(2-y);
return 0;
}