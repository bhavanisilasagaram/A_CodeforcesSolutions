#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int main() {
fastio;
int a;int b;
cin>>a>>b;
int year=0;
while(a<=b){
    a*=3;
    b*=2;
    year++;
}
cout<<year;
return 0;
}