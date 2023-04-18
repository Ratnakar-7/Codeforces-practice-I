#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long int n,p,q,a=0;
    cin>>n;
    while(cin>>p>>q){
        if(q-p>=2)a++;
    }
    cout<<a;
 }