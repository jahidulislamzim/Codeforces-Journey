#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long num;
    int n;
    cin >> num >> n;
    
    
    for(int i=0; i<n; i++){
        int lastDigit = num % 10;
        if(lastDigit == 0){
            num /= 10;
        }else{
            num-=1;
        }
    }
    
    
    cout << num << endl;
    
    
    
    return 0;
}