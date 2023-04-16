#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x=1;
    cin >> n;
    while(n>5){
        n-=5;x++;
    }cout<<x;
}