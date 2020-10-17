#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int t;cin>>t;
while(t--){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)cin>>arr[i];
    sort(arr,arr+num);
    reverse(arr,arr+num);
    cout<<min(min(arr[0],arr[1])-1,num-2)<<endl;
}
return 0;
}