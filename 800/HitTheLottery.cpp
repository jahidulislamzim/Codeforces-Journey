#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int N, ans=0;
    cin >> N;
    int arr[]={100, 20, 10, 5, 1};

    for(int i=0; i<5; i++){
        ans += N/arr[i];
        N %= arr[i];
    }
    cout << ans << endl;
    return 0;
}