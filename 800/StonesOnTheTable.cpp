#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, count=0;
    string stones;
    cin >> n;
    cin >> stones;

    for(int i=0; i<stones.length(); i++){
        if(stones[i] == stones[i+1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}