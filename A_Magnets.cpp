#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, a = 0;
    string s, checker;
    cin >> n;
    cin >> s;
    a++;
    
    checker = s;
    while (cin >> s)
    {
        if (s != checker)
        {
            a++;
            checker = s;
        }
    }
    cout << a;
}