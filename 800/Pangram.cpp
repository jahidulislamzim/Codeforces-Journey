#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    string str, pangram;
    cin >> len;
    cin >> str;

    for(int i = 0; i < len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';  
        }

        bool isUnique = true;
        for(int j = 0; j < pangram.size(); j++) {
            if(str[i] == pangram[j]) {
                isUnique = false; 
                break;
            }
        }

        if(isUnique) {
            pangram += str[i];
        }
    }


    if(pangram.length()==26){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
