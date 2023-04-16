#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, w,x;
    cin >> k>>n>>w;
    x=(k*w*(w+1)/2);
    if(x>n)cout << x-n;
    else cout<<"0";
}