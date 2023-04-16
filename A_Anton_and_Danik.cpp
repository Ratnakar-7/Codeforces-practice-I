#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,a=0,d=0;
    cin>>n;
    string s;
    while(cin>>s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')a++;
            else d++;
        }
    }
    if(a>d)cout<<"Anton";
    else if(a<d) cout<<"Danik";
    else cout<<"Friendship";
}