#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // dynamic array
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}