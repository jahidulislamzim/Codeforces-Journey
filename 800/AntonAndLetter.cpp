#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int length = 0;
    char arr[26];

    for(int i=0; i<str.size(); i++){
        if(str[i]>='a'&& str[i] <= 'z'){
            bool isFound = false;
            for(int j=0; j<length; j++){
                if(arr[j] == str[i]){
                    isFound = true;
                    break;
                }
            }
            if(!isFound){
                arr[length] = str[i];
                length++;
            }
        }
    }

    cout << length << endl;


    


    return 0;
}