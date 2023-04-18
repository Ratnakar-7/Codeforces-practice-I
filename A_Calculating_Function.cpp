#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long double x;long long int n; cin>>n;
    x=floor(n/2);
    if(n%2 ==1)cout<<x*(-1);
    else cout<<x;
 }