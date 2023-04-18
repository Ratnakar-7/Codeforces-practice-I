#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b,c,d;
    set<long long int> s;
    cin>>a>>b>>c>>d;
    s.insert(a);s.insert(b);s.insert(c);s.insert(d);
    
    cout<<4-s.size();
}