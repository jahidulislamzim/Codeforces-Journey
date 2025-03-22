#include <bits/stdc++.h>
using namespace std;


int main(){

    int N, x=0;
    cin>>N;

    for(int i=0; i<N; i++){
        string X;
        cin>>X;

        if(X == "X++" || X == "++X"){
            x++;
        }else if(X == "X--" || X == "--X"){
            x--;
        }
    }

    cout << x << endl;


    return 0;
}