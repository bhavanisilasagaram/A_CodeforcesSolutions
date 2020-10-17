#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
// take in the string
string str;
cin>>str;
int prv=0;
// go through each char in string
for(int i=0;i<str.length();i++){
    //see if wub is there
    if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
        i+=2;// if there ignore the wub and move to next charecter
    }
    else{
        if(prv+1!=i)cout<<" ";// prv element we visited is the last letter before the 'wub'
        cout<<str[i];// if the last letter is part of the same word the prv+1==i
        prv=i;//make the previous letter be prv
    }
}
return 0;
}