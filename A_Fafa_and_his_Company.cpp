#include <iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
int solve(int num){
    int fin=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            fin++;
        }
    }
    return (fin)-1;
}
int main() {
fastio;
    int num;cin>>num;
    cout<<solve(num);
return 0;
}
