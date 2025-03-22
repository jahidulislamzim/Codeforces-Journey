#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int step;
    cin >> step;
    
    if(step%5==0){
        cout << step/5 << endl;
    }else{
        cout << (step/5)+1 << endl;
    }
    
    return 0;
}