#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0, n;
    string s;
    cin >> n;
    while (cin >> s)
    {
        if (s[0] == '+' || s[2] == '+')
            x++;
        else if (s[0] == '-' || s[2] == '-')
            x--;
    }
    cout << x;
}