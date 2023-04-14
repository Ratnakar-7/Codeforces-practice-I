#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
  
    while (cin >> s)
    {
        int size = s.size();
        if (size > 10)
        {

            cout << s[0] << size - 2 << s[size - 1] << endl;
        }
        else if (size <= 10)
            cout << s << endl;
    }

    return 0;
}