#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int arr[51];
    arr[0] = 0;
    arr[1] = 0, arr[2] = 1;
    for (int i = 3; i < 51; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    long long int n, x = 0, y = 1;
    cin >> n;
    if(n<=50) cout << arr[n];
}