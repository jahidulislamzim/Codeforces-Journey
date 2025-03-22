#include <bits/stdc++.h>
using namespace std;

int main()
{
    string one, two;
    cin >> one;
    cin >> two;
    
    transform(one.begin(), one.end(), one.begin(), ::tolower);
    transform(two.begin(), two.end(), two.begin(), ::tolower);

    if (one < two)
        cout << "-1" << endl;
    else if (one > two)
        cout << "1" << endl;
    else if (one == two)
        cout << "0" << endl;
        
    return 0;
}