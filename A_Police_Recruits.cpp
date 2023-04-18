#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,sum=0,counter=0,y;
    cin>>n;
    while(cin>>y){
        sum+=y;
        if(sum<0) {counter+=sum; sum=0;}
    }
    cout<<abs(counter);
    
}