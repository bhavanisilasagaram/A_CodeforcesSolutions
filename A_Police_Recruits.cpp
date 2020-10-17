#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int cnt=0;
int c=0;
for(int i=0;i<num;i++){
    int el;
    cin>>el;
    if(cnt<1&&el==-1){
        c++;
    }
    else if(el==-1&&cnt>=1){
        cnt--;
    }
    else if(el!=-1){
        cnt+=el;
    }
}
cout<<c;
return 0;
}