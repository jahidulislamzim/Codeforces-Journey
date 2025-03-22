#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p, q;
    cin >> p;
    int arr[200]; 
    for (int i = 0; i < p; i++) {
        cin >> arr[i];
    }

    cin >> q;
    for (int i = p; i < p + q; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + p + q);

    bool isTrue = true;
    for (int j = 1; j <= n; j++) {
        bool found = false; 
        for (int i = 0; i < p + q; i++) {
            if (arr[i] == j) {
                found = true; 
                break; 
            }
        }
        if (!found) {
            isTrue = false;
            break;
        }
    }

    if (isTrue) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
