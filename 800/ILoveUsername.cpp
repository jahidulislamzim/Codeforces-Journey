#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1) return 0; 

    int score, best, worst;
    cin >> score; 
    best = worst = score;

    int amazingCount = 0;

    for (int i = 1; i < n; i++) {
        cin >> score;

        if (score > best) {
            amazingCount++; 
            best = score; 
        } else if (score < worst) {
            amazingCount++; 
            worst = score; 
        }
    }

    cout << amazingCount << endl;

    return 0;
}
