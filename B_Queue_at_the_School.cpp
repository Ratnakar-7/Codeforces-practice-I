#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,k;
 static int i=0;
    cin>>n>>k;
    string s;
    cin >> s ;
    while(k--){
        for( i;i<s.size()-1; i=i+1){
            if((s[i]=='B')&& (s[i+1]=='G')){
                s[i]='G';
                s[i+1]='B';
                
            }
            continue;
        }
    }
    cout<<s;
}