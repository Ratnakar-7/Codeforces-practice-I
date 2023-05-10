#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n=0,x;
        string s;
        cin>>s;
        
        stack<char> st;
        for(int i=0;i<s.size();i++){
           if(s[i]==s[s.size()-1])n++;
           x^=s[i];
        }
        if(st.size())cout<<st.size()<<endl;
        else cout<<"-1"<<endl;

    }
}