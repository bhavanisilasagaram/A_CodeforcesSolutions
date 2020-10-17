#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
string str;
cin>>str;
bool flag=false;
int cnt=0;
int left=0;
int lefts=0;
int rights=0;
int leftcnt=0;
bool fflag=false;
for(int i=0;i<str.length();i++){
    if(flag==false){
        if(str[i]=='L'){
            leftcnt++;
            left=i+1;
            flag=true;
        }
        else if(str[i]!='.'){
            if(str[i]=='R')rights++;
            left=i+1;
            flag=true;
        }
    }
    else if(str[i]=='R'){
        rights++;
        cnt++;
    }
    else if(str[i]=='.'){
        if(leftcnt==0)continue;
        else{
            cnt--;
            break;
        }
    }
    else{
        leftcnt++;
        lefts++;
        break;
    }


}
if(rights==0){
    cout<<left+lefts<<" "<<left-1;
}
else{
    if(leftcnt==0)cout<<left<<" "<<left+cnt+1;
    else cout<<left<<" "<<left+cnt;
} 
return 0;
}