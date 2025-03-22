#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isEasy = true;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x==1){
            isEasy = false;
        }
    }

    if(isEasy){
        cout << "EASY" << endl;
    }else{
        cout << "HARD" << endl;
    }


    return 0;
}