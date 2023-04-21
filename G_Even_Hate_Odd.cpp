#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t, odd = 0, even = 0, x;
        cin >> t;
        
        while (t--)
        {
            cin >> x;
            if (x % 2)
                odd++;
            else
                even++;
        }
        if ((odd - even) % 2)
        {
            cout << -1 << endl;
           
        }
        else cout << abs(odd - even) / 2 << endl;
    }
}