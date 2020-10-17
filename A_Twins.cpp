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
for(int i=0;i<num;i++){
    cin>>a[i];
}
int b[num];
sort(a,a+num);
reverse(a,a+num);
int sum=0;
for(int i=0;i<num;i++){
    sum+=a[i];
    b[i]=sum;
}
for(int i=0;i<num;i++){
    if(b[i]>b[num-1]-b[i]){
        cout<<i+1;
        break;
    }
}

return 0;
}