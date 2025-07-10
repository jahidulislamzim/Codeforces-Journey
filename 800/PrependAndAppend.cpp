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

    while (T--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;

        int l = 0, r = size - 1;
        while (l < r)
        {
            if (str[l] != str[r])
            {
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        int result = r - l + 1;
        cout << result << endl;
    }

    return 0;
}