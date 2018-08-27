#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int Mx = 0;
  int mn = 1000100000;
  double ave = 0;
  vector<int> S(N);
  for (int i=0; i<N; i++){
    cin >> S[i];
    ave += S[i];
    Mx = max(S[i], Mx);
    mn = min(S[i], mn);
  }
  ave /= (double)N;
  double P, Q;
  if ((Mx-mn == 0) && (B != 0)){
    cout << -1 << endl;
    return 0;
  }
  if (B == 0) P = 0;
  else P = B/(double)(Mx-mn);
  Q = -ave*P + A;

  cout << fixed << setprecision(10);
  cout << P << ' ' << Q << endl;
}
