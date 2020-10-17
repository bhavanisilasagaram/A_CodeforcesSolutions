#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
    int num,nes;
    cin>>num>>nes;
    double minp= 100000;
    double pp;
    for(int i=0;i<num;i++){
        double a,b;
        cin>>a>>b;
        pp=a/b;
        minp=min(pp,minp);
    }
    cout<<setprecision(8)<<minp*nes;
return 0;
}