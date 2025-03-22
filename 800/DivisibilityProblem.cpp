#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        long long remainder = x % y;
        long long count = (remainder == 0) ? 0 : (y - remainder);

        cout << count << endl;
    }
    return 0;
}
