#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define from0(i,n) for(int i=0;i<n;i++)
#define from1(i,n) for(int i=1;i<n;i++)
#define fromn(i,n) for(int i=n;i>0;i--)
#define fromn1(i,n) for(int i=n-1;i>=0;i--)
#define e endl

void solution() {
    int a, b, c;
    cin>>a>>b>>c;
    int result[] = {a+b+c, a+(b*c), a*b*c, (a*b)+c, (a*c)+b,(a+b)*c,(a+c)*b,(b+c)*a};
    int maxi = result[0];
    from0(i,8){
        if(result[i]>maxi) maxi= result[i];
    }

   cout<<maxi;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcases;
    testcases=1;
    // cin >> testcases;

    while(testcases--) solution();

    return 0;
}