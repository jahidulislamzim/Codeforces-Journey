#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; 

    for (int i = 0; i < N; i++) {
        int Num;
        cin >> Num;  
        
        vector<int> roundNumbers;  
        int position = 0;

        while (Num > 0) {
            int digit = Num % 10;  
            if (digit != 0) {
                int roundNum = digit * pow(10, position);  
                roundNumbers.push_back(roundNum);  
            }
            Num /= 10;  
            position++;
        }

        cout << roundNumbers.size() << endl; 

  
        for (int j = roundNumbers.size() - 1; j >= 0; j--) {
            cout << roundNumbers[j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
