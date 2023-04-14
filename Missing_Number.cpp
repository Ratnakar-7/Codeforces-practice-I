#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,sum;
    cin>>n;
    sum=(n*(n+1))/2;
    while(cin>>n){
        sum=sum-n;
    }
    cout<<sum;
}