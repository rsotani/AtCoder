#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  for (int i=0; i<S.size(); i++){
    if ((S[i] >= '0') && (S[i] <= '9')){
      if ((S[i+1] >= '0') && (S[i+1] <= '9')) cout << S[i] << S[i+1] << endl;
      else cout << S[i] << endl;
      return 0;
    }
  }
}
