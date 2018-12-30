#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  vector<int> r(M);
  for (int i=0; i<M; i++) cin >> r[i];
  vector<double> lgs(N+1,0);
  for (int i=1; i<=N; i++){
    lgs[i] = lgs[i-1] + log10(i);
  }
  double logp = -N*log10(M);
  for (int i=0; i<M; i++){
    logp += lgs[N] - lgs[N-r[i]] - lgs[r[i]];
    N -= r[i];
  }
  logp *= -1;
  cout << ceil(logp) << endl;
}
