#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int m = max(A,max(B,C));
  int ans;
  if (m==A) ans = 10*A+B+C;
  else if (m==B) ans = 10*B+A+C;
  else ans = 10*C+A+B;
  cout << ans << endl;
}
