#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long int n,x,y,i; cin>>n;
    int arr[101]={0};
    cin>>x;
    while(x--){
        cin>>i;
        arr[i]=1;
    }
    cin>>y;
    
    while(y--){
        cin>>i;
        arr[i]=1;
    }
   for(int i=1;i<=n;i++)
   {
    if(arr[i]==1) {
            continue;
        }
      if(arr[i]==0) { cout<<"Oh, my keyboard!"; return 0;}
    }
     cout<<"I become the guy.";
    
   
 }