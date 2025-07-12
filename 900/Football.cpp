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
    string str;
    cin >> str;

    int count = 1;
    bool found = false;

    for (int i = 1; i < str.size(); i++){
        if (str[i] == str[i - 1]){
            count++;
            if (count >= 7){
                found = true;
                break;
            }
        }else{
            count = 1;
        }
    }

    cout << (found ? Yes : No);

    return 0;
}