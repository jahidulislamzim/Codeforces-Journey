#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, C;
    cin >> R >> C;
    bool left = false, right = true;
    for(int i=1; i<=R; i++){
        for(int j=1; j<=C; j++){
            if(i%2!=0){
                cout << "#";
            }else{
                if(right && j==C){
                    cout << "#";
                }else if(left && j == 1){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
        }
        if(i%2==0){
            left = !left;
            right = !right;
        }
        cout << endl;
    }
    return 0;
}