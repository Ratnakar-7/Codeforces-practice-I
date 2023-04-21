#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,x=0.0,a; cin>>n;
    while(cin>>a){
        x+=a;
    }
    x=(x/n);
    cout<<fixed<<std::setprecision(12)<<x;
}