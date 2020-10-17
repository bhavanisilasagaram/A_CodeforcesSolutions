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
int tot=0;
vector< pair< int, int> >v;
vector<int>fin;
for(int i=0;i<num;i++){cin>>a[i];tot+=a[i];}
for(int i=1;i<num;i++){
    v.push_back(make_pair(a[i],i));
}
sort(v.begin(),v.end());
int tota=a[0];
int rest=0;
fin.push_back(0);
for(auto pr:v){
        if(pr.first*2<=a[0]){
            tota+=pr.first;
            fin.push_back(pr.second);
        }
        else{
            rest+=pr.first;
        }
    }
if(tota>rest){
cout<<fin.size()<<endl;
for(auto it:fin){
    cout<<it+1<<" ";
}
}
else{
    cout<<"0";
}
return 0;
}