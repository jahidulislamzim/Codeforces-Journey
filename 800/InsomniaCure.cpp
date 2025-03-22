#include <bits/stdc++.h>
using namespace std;


// Fast I/O
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    // Enable fast input/output
    FAST_IO; 
    long long int k, l, m, n, d, count=0;
    cin >> k >> l >> m >> n >> d;
    bool isTrue = true;

    for(int i=1; i<=d; i++){
        if(k==1 || l==1 || m==1 || n==1){
            isTrue = false;
            cout << d << endl;
            break;
        }else if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }
    if(isTrue){
        cout << count << endl;
    }
    
    return 0;
}