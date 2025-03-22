#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string word;
    cin >> word;
    
    int uppercase=0, lowercase=0;
    
    for(int i=0; i<word.length(); i++){
        if(word[i] >= 65 && word[i] <= 90){
            uppercase++;
        }else if(word[i] >= 97 && word[i] <= 122){
            lowercase++;
        }
    }
    
    if(uppercase > lowercase){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }else{
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    
    cout << word << endl;

    
    
    return 0;
}