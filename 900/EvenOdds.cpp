#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Macros
#define endl "\n"
#define Yes "YES \n"
#define No "NO \n"

int main() {
    fast_io;

    long long int K, N;
    cin >> K >> N;

    long long int number_of_odds = (K + 1) / 2;

    if (N <= number_of_odds) {
        cout << 2 * N - 1 << endl;
    } else {
        cout << 2 * (N - number_of_odds) << endl;
    }

    return 0;
}
