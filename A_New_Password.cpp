#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
    int a;
    int b;
    cin>>a>>b;
    vector<char>v;
    for(int i=0;i<=b;i++){
        v.push_back(char('a'+i));
    }
    int j=0;
    for(int i=0;i<a;i++){
        if(j==v.size()-1)j=0;
        cout<<v[j];
        j++;
    }
return 0;
}