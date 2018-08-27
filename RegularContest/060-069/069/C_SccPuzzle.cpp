#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, M;
  cin >> N >> M;
  long long ans = 0;
  if (2*N >= M) ans += M/2;
  else ans += N + (M-2*N)/4;
  cout << ans << endl;
}
