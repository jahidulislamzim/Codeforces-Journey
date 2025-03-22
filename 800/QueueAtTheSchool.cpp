#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    string str;
    cin >> n >> t;
    cin >> str;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (str[j] == 'B' && str[j + 1] == 'G') {
                char boy = str[j];
                str[j] = str[j + 1];
                str[j + 1] = boy;
                j++;
            }
        }
    }

    cout << str << endl;

    return 0;
}
