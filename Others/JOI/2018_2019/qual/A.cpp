#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int ans = 0;
  ans += C/(A*7+B)*7;
  C %= (A*7+B);
  if (C>=7*A) ans += 7;
  else ans += ceil(C/(double)A);
  cout << ans << endl;
}
