#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int um;
cin>>num;
char arr[num][num];
map<char,int>m;
for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        cin>>arr[i][j];
        char ele=arr[i][j];
        m[ele]++;
    }
}
char notcross=arr[0][1];
char cross=arr[0][0];
if(m.size()!=2){
    cout<<"NO";
}
else{
    if()
}

return 0;
}