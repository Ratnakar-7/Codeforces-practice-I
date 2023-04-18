#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; string s="I hate", t="I love", x=" that ";
    string ans=s;
    cin>>n;if(n==1){cout<<ans+" it"; return 0;}
    for(int i=2;i<=n;i++){
        if(i%2==0){ans=ans+x+t;}
        else ans=ans+x+s;
    }
    cout<<ans+" it";
}