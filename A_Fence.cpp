#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll arr[3];
    arr[0]=a;arr[1]=b;arr[2]=c;
    sort(arr, arr+3);
    cout<<arr[1]+arr[2]-arr[0]<<endl;
}
return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
ll t;cin>>t;
while(t--){
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    vector<ll>v;
    ll a[n];
    bool hasx=false;
    vector<ll>xval;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
        if(a[i]==x){
            hasx=true;
        }
    }
    ll anss=LONG_LONG_MAX;
    ll ans=LONG_LONG_MAX;
    sort(a,a+n);
    if(a[p-1]==x){
        cout<<"0"<<endl;
        continue;
    }
    else if(n==1){
        cout<<"1"<<endl;
    }
    for(ll i=0;i<n;i++){
        if(a[i]==x){
            xval.push_back(i);
        }
    }
    bool flag=false;
    if(hasx==true){
        //flag=true;
        //for(auto el:xval){
        //   cout<<el<<" ";
        //  }
        for(auto el : xval){
            //cout<<"IN the for ";
            //cout<<"el is"<<el<<". ";
            //cout<<k-1<<p-1<<el;
            //if((k-1<=p-1)&&(p-1<el)){//c1 removed = 4 0 2 3
            //    ans=el-(p-1);                       0 3p 6k 8
            //}
            //else if((k-1>p-1)&&(p-1>el)){
            //    ans=p-el-1;
            //    cout<<"ans is "<<ans;
            //cout<<p<<" is p "<<el<<" is el"<<endl;
            //if(x>a[p-1])el++;
            //if(a[p-1]<x)el++;
            if(((k-1<=p-1)&&(p-1<el))||((k-1>p-1)&&(p-1>el))){
                ans=abs(p-el);
            }
            
            //cout<<p<<" is p "<<el<<" is el"<<endl;
            //cout<<"ans is "<<ans;
            anss=min(anss,ans);// 0k 3 4 4p 6 6
            //cout<<anss<<" is anss "<<endl;
        }
        
    }
    else{
        //cout<<"in else ";
        if(((k-1<=p-1)&&(x>=a[p-1]))||((k-1>=p-1)&&(x<=a[p-1]))){
        v.push_back(x);
        sort(v.begin(),v.end());
        ll it = lower_bound(v.begin(),v.end(),x)-v.begin();
        //if(a[p-1]<x)p--;//check again
        if(a[p-1]<=x)it++;
        //cout<<it<<"is it."<<endl;
        //cout<<p<<"is p "<<endl;
        anss=abs(it-(p));
        //if(it==0)ans++;
        }


    }
    //cout<<anss<<"   "<<ans<<endl;
    if(anss==LONG_LONG_MAX&&ans==LONG_LONG_MAX)cout<<"-1"<<endl;
    //else if(ans==0)cout<<ans+1<<endl;
    else cout<<anss<<endl;

}
return 0;
}