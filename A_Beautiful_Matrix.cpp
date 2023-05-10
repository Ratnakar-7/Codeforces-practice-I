#include <bits/stdc++.h>
using namespace std;
int main()
{

    
        int a[5][5];

        int n, m;
        for (int i = 1; i <= 5; i++)
            for (int j = 1; j <= 5; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                {
                    n = i;
                    m = j;
                }
            }
        cout << (abs(n - 3) + abs(m - 3));
    }