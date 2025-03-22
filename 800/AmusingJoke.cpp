#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B, P, S;
    cin >> A >> B >> P;
    S=A+B;
    sort(S.begin(), S.end());
    sort(P.begin(), P.end());

    if(S==P){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}