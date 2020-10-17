#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int num;
cin>>num;
int a[num]={0};
int next=num;
for(int i=0;i<num;i++){
    //cout<<"next is "<<next<<endl;
    int ele;
    cin>>ele;
    a[ele-1]=1;
    int j=ele-1;
    if(next==ele){
        while(a[j]==1&&j>=0){
            cout<<j+1<<" ";
            next=j;
            j--;
        }
    }
    cout<<endl;
}
return 0;
}