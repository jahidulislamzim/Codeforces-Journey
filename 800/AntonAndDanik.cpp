#include <bits/stdc++.h>
using namespace std;

int main(){

int n, a=0, d=0;
string str; 

cin >> n;
cin >> str;


for(int i=0; i<n; i++){
  if(str[i] == 'A'){
    a++;
  }else if(str[i]== 'D'){
    d++;
  }
}


if(a==d){
 cout << "Friendship" << endl;
}else if(a>d){
  cout << "Anton"<< endl;
}else if(a<d){
  cout << "Danik" << endl;
} 
  
  return 0;
}