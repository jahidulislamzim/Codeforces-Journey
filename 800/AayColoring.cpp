#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


// Macros
#define endl "\n"
#define Yes "YES \n"
#define No "NO \n"

bool isEven(int N){
    if(N % 2 == 0){
        return true;
    }else{
        return false;
    }
}


int main() {
    fast_io;

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int size;
        cin >> size;
        int even = 0, odd = 0;

        for(int j=0; j<size; j++){
            int N;
            cin >> N;

            if(isEven(N)){
                even += N;
            }else{
                odd += N;
            }
        };

        if(isEven(even) && isEven(odd)){
            cout << Yes;
        }else{
            cout << No;
        };


    }



    return 0;
}