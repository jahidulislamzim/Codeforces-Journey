#include <bits/stdc++.h>
using namespace std;


int main(){

    int n, height, width=0;
    cin >> n >> height;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        if(x>height){
            width += 2;
        }else{
            width += 1;
        }
    }

    cout << width << endl;


    return 0;
}