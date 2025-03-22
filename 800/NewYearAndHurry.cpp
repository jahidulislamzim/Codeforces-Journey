#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int P = 0; 
    int availableTime = 240 - M; 
    for (int i = 1; i <= N; i++) {
        int timeToSolve = (5 * i * (i + 1)) / 2;
        if (timeToSolve <= availableTime) {
            P = i; 
        } else {
            break; 
        }
    }

    cout << P << endl; 
    return 0;
}
