#include <bits/stdc++.h>
using namespace std;

int main(){
  double P;
  cin >> P;
  cout << fixed << setprecision(10);
  if (P<=1.5/log(2)) cout << P << endl;
  else {
    double x = 1.5*(log2(P)-log2(1.5/log(2)));
    cout << x + pow(2.0, log2(P)-x/1.5) << endl;
  }
}
