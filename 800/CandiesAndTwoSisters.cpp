#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n < 2) {
            cout << 0 << endl;  
        } else {
            cout << (n - 1) / 2 << endl;
        }
    }

    return 0;
}
