#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int num,n;
    cin>>num>>n;
    int a[num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    sort(a,a+num);
    int sum=0;
    int first = a[0];
    for(int i=1;i<num;i++){
        int rem = n-a[i];
        sum+=(rem/first);
    }
    cout<<sum<<endl;

}
return 0;
}