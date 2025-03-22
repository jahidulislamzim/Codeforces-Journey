#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){
    optimize();

    int T;
    cin >> T;

    while(T--){
        int N;
        string S; 

        cin >> N >> S;

        bool solve[26] = {0};
        int balloons = 0;

        for(int i=0; i<S.length(); i++){
            int index = S[i] - 'A';
            if(!solve[index]){
                balloons += 2;
                solve[index] = true;
            }else{
                balloons += 1;
            }
        }

        cout << balloons << endl;
    }
   

    return 0;
}


