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
    cin >> N;

    if(N%3==0){
        cout << "Second" << endl;
    }else{
        cout << "First" << endl;
    }
   }

    return 0;
}


