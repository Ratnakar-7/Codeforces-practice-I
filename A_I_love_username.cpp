#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,counter=0,y,maximum,lowest;
    cin>>n;
    cin>>x;
    maximum=x,lowest=x;
    while(cin>>y){
        if(y>maximum){counter++; maximum=y;}
        if(y<lowest){counter++; lowest=y;}
    }
    cout<<counter;
    
}