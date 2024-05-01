#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcases;
    cin >> testcases;

    while(testcases--){
        
        int a,b,c,x=0;
        cin>>a>>b>>c;
        x= a^ b ^ c^ max(a,max(b,c)) ^ min(a,min(b,c));

        cout<<x<<endl;

    }
    
}