#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout << "I love";
            if(i!=n){
                cout <<" that ";
            }else{
                cout << " it";
            }
        }else{
            cout << "I hate";
            if(i!=n){
                cout <<" that ";
            }else{
                cout << " it";
            }
        }
    }

    return 0;
}