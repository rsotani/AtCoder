#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  double ans = 0;
  ans += 6.0*(K-1)*(N-K);
  ans += 3*(N-1) + 1;
  ans /= (double)pow(N,3);
  cout << fixed << setprecision(30);
  cout << ans << endl;
}
