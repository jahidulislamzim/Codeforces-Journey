#include <bits/stdc++.h>
using namespace std;


int main(){
    long int N, sum=0;
    cin>>N;

    for(int i=1; i<=N; i++){
        string str;
        cin>>str;
        if(str == "Tetrahedron"){
            sum += 4;
        }else if(str == "Cube"){
            sum += 6;
        }else if(str == "Octahedron"){
            sum += 8;
        }else if(str == "Dodecahedron"){
            sum += 12;
        }else if(str == "Icosahedron"){
            sum += 20;
        }
    }

    cout << sum << endl;


    return 0;
}