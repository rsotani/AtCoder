#include <bits/stdc++.h>
using namespace std;

int main(){
  int A;
  string S;
  cin >> A >> S;
  int p = A;
  for (auto a: S){
    if (p == 0){cout << "Yes" << endl; return 0;}
    if (a == '+') p++;
    else p--;
  }
  if (p==0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
