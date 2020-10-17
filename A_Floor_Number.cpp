#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int num,x;
    cin>>num>>x;
    int sum=1;
    int summ=2;
    while(summ<num){
        summ+=x;
        sum+=1;
    }
    cout<<sum<<endl;
}
return 0;
}