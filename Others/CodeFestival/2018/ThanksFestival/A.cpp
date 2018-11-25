#include <bits/stdc++.h>
using namespace std;

int main(){
  long long T, A, B, C, D;
  cin >> T >> A >> B >> C >> D;
  long long ans=0;
  if (A+C<=T) ans=B+D;
  else if (C<=T) ans=D;
  else if (A<=T) ans=B;
  cout << ans << endl;
}
