#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int capacity=0, inside=0;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;

        inside -= x;
        inside += y;

        if(inside > capacity){
            capacity = inside;
        }
    }

    cout << capacity << endl;
    return 0;
}
