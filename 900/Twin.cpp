#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Macros
#define endl "\n"
#define Yes "YES \n"
#define No "NO \n"

int main()
{
    fast_io;
    int T;
    cin >> T;
    int arr[T];
    long long int total = 0;
    long long int sum = 0;
    int count = 0;

    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr + T, greater<int>());

    for (int i = 0; i < T; i++)
    {
        sum += arr[i];
        count++;
        if (sum > total / 2)
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}