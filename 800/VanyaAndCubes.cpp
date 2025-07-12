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

    int n;
    cin >> n;
    
    int height = 0;
    int blocks = 0;
    int level = 1;
    
    while (true) {
        int need = level * (level + 1) / 2;
        
        if (blocks + need <= n) {
            blocks += need;
            height++;
            level++;
        } else {
            break;
        }
    }
    
    cout << height << endl;



    return 0;
}