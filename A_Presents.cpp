#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long int n; cin>>n;
    int a[n],b[n]={0};
   int i=0,j=1;
    while(cin>>a[i]){
         b[a[i]%n]=(i+1)%(n);i++;
    }
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
 }