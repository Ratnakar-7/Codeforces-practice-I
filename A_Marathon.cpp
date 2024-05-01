#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    long long int testcases;
    cin >> testcases;
    while(testcases--){
        
        int a,b,c,d,x=0;
        cin>>a>>b>>c>>d;
        if(a<b)x++;
        if(a<c)x++;
        if(a<d)x++;
        cout<<x<<endl;

    }
    
}