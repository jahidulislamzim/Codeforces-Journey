#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int kValue = a[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= kValue && a[i] != 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}