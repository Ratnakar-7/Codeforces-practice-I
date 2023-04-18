#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, h,x,count=0;
    cin>>n>>h;
    while(cin>>x)if(x>h)count++;
    cout<<n+count;
 }