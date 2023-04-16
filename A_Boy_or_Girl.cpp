#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set <char> c;
    for(int i=0;i<s.size();i++){
        c.insert(s[i]);
    }
    if(c.size()%2==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}