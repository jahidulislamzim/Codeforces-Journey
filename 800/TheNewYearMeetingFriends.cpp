#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[3], SUM=0;
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A+3);
    SUM = (A[1]-A[0])+(A[2]-A[1]);
    cout << SUM << endl;
    return 0;
}

    // if (a > b)
    // if (a > c) 
    // if (b > c) 

