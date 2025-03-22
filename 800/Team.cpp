#include <bits/stdc++.h>
using  namespace std;


int main(){

    int N, total=0;
    cin >> N;

    for(int i=0; i<N; i++){
        int count = 0;
        for(int j=0; j<3; j++){
            int x;
            cin >> x;
            
            if(x==1){
                count++;
            }
        }

        if(count >= 2){
            total++;
        }
    } 
    cout << total << endl;
    
    return 0;
}