#include <iostream>
using namespace std;

int main() {

    string userName;
    cin >> userName;

    int count = 0;

    for (int i = 0; i < userName.length(); i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (userName[i] == userName[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            count++; 
        }
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
