#include <bits/stdc++.h>
using namespace std;

int main(){
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  xb -= xa; xc -= xa;
  yb -= ya; yc -= ya;
  cout << fixed << setprecision(10);
  cout << 0.5*abs(xb*yc-xc*yb) << endl;
}
