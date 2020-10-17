#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a;int b;
cin>>a>>b;
int arr[a];
for(int i=0;i<a;i++)cin>>arr[i];
sort(arr,arr+a);
int it = upper_bound(arr,arr+a,b)-arr;
cout<<2*(a-it)+it<<endl;

return 0;
}