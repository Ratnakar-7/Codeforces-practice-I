#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define from0(i,n) for(int i=0;i<n;i++)
#define from1(i,n) for(int i=1;i<n;i++)
#define fromn(i,n) for(int i=n;i>0;i--)
#define fromn1(i,n) for(int i=n-1;i>=0;i--)
#define e endl

void solution() {
    int number; cin>>number;
    int lucky[]= {4,7,47,74,44,77,444,447,474,477,744,747,774,777};
    from0(i,14){
        if(number%lucky[i]==0){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    return;
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