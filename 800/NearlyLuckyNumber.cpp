#include <bits/stdc++.h>
using namespace std;


int main(){

    long long num;
    int count = 0;

    cin >> num;

    while(num > 0){
        int last = num % 10;
        if(last == 4 || last == 7){
            count++;
        }
        num /= 10;
    }

    if(count == 4 || count == 7 ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}