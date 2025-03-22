#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[4], count=0;
    for(int i=0; i<4; i++){
        cin >> arr[i];
    }

    for(int i=0; i<4; i++){
        int min_index = i;
        for(int j=i+1; j<4; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    for(int i=0; i<3; i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }

    cout << count << endl;




    return 0;
}