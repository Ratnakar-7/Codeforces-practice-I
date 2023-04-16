#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    if (s.size() == t.size())
    {
        int size = s.size() - 1;
        for (int i = 0; i <= size; i++)
        {
            if (s[i] != t[size - i])
            {
                cout << "NO";
                return 0;
            }
        }cout << "YES";
    }
    else cout<<"NO";
}