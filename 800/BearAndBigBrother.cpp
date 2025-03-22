#include <bits/stdc++.h>
using namespace std;

int main(){
    int bear, brother, count = 0;
    cin >> bear >> brother;

    while(brother > bear || brother == bear){
        bear *= 3;
        brother *= 2;
        count++;
    }

    cout << count << endl;

    return 0;
}