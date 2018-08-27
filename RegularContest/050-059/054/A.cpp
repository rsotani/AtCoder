#include <bits/stdc++.h>
using namespace std;

int main(){
  long long L, X, Y, S, D;
  cin >> L >> X >> Y >> S >> D;
  double ansR;
  if (S <= D) ansR = (double)(D-S)/(Y+X);
  else ansR = (double)(L-(S-D))/(Y+X);
  double ansL = ansR+1;
  if (Y>X){
    if (D <= S) ansL = (double)(S-D)/(Y-X);
    else ansL = (double)(L-(D-S))/(Y-X);
  }
  cout << fixed << setprecision(10);
  cout << (double)min(ansR,ansL) << endl;
}
