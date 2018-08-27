#include <bits/stdc++.h>
using namespace std;

int main(){
  int D, N;
  cin >> D >> N;
  int ans = N;
  if (N==100) ans += 1;
  for (int i=0; i<D; i++) ans *= 100;
  cout << ans << endl;
}
