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
sort(a,a+num);
int maxx;
int minn;
for(int i=0;i<num;i++){
        maxx=max(abs(a[i]-a[0]),abs(a[i]-a[num-1]));
        if(i!=0&&i!=num-1)minn=min(abs(a[i-1]-a[i]),abs(a[i+1]-a[i]));
        else if(i==0)minn=abs(a[i+1]-a[i]);
        else minn=abs(a[i-1]-a[i]);
    cout<<minn<<" "<<maxx<<endl;
}
return 0;
}