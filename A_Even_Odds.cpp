#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k,half;
    cin>>n>>k;
    half=(n+1)/2;

    if(k<=half) cout<<2*k-1;
    else cout<<2*(k-half);
}