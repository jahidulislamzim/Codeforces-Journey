#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Macros
#define endl '\n'
#define Yes "YES\n"
#define No "NO\n"

int main() {
    fast_io;

    int T;
    cin >> T;

    while (T--) {
        int size, N;
        cin >> size >> N;
        bool isFound = false;

        for (int j = 0; j < size; j++) {
            int k;
            cin >> k;
            if (k == N) {
                isFound = true;
            }
        }

        cout << (isFound ? Yes : No);
    }

    return 0;
}
