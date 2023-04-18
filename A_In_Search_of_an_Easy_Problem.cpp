#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long int n,a=0;
    cin>>n;
    while(cin>>n){
        a+=n;
    }
    if(a>=1)cout<<"HARD";
    else cout<<"EASY";
 }