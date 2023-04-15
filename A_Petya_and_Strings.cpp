#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a.size() == b.size())
        for (int x = 0; x < a.size(); x++)
        {
            if (a == b)
            {
                cout << "0" << endl;
                break;
            }
            if (a[x] > b[x])
            {
                cout << "1" << endl;
                break;
            }
            if (a[x] < b[x])
            {
                cout << "-1" << endl;
                break;
            }
        }
}

/* PRO 
#include <bits/stdc++.h>
char s[101],f[101];main(){std::cin>>s>>f;std::cout<<stricmp(s,f);}

*/
