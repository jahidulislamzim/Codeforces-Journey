#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
   
    cin >> str1;
    cin >> str2;
   
    bool isTranslation = true;
 
   
    for(int i=0; i<str1.length(); i++){
        if(str1.length() != str2.length()){
            isTranslation = false;
            break;
        }else if(str1[i] != str2[(str1.length() - 1)-i]){
            isTranslation = false;
            break;
        }
    }
   
    if(isTranslation){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
   
    return 0;
}