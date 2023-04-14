#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,sum=0;
    cin>>a;
    while(cin>>a>>b>>c){
        if(a+b+c>1) sum++;
    }
    cout<<sum;
}