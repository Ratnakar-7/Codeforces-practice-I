#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, x, a = 0;
    cin >> n >> k;
    while (cin >> x)
    {
        if (x >= k)  a++;
    }
    cout << a;
}