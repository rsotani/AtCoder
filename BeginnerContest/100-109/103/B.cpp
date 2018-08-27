#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  cin >> S >> T;
  int lens = S.size();
  for (int i=0; i<lens; i++){
    bool flag = true;
    for (int j=0; j<lens; j++){
      if (T[j] != S[(i+j)%lens]){
        flag = false;
        break;
      }
    }
    if (flag){cout << "Yes" << endl; return 0;}
  }
  cout << "No" << endl;
}
