#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  char C1, C2;
  cin >> C1 >> A >> C2 >> B;
  if (C1 == C2) cout << abs(A-B)/15 << endl;
  else cout << (A+B)/15 << endl;
}
