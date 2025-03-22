#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i=0; i<s.length(); i+=2){
        int min = i;

        for(int j=i+2; j<s.length(); j+=2){
            if(s[min] > s[j]){
                min = j;
            }
        }

        char temp = s[i];
        s[i]  = s[min];
        s[min] = temp;
    }

    cout << s << endl;


    return 0;
}