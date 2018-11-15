#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, N;
  cin >> A >> B >> N;
  if (A>B) swap(A,B);
  vector<string> ans(N);
  for (int i=0; i<N; i++){
    int C, D;
    cin >> C >> D;
    if (C>D) swap(C,D);
    if (A<=C&&B<=D){
      ans[i] = "YES";
      continue;
    }
    double dirmax = M_PI/2.0, dirmin = 0, dirnow=0;
    while (dirmax-dirmin > 1e-8){
      dirnow = (dirmax+dirmin)/2;
      double t = B*sin(dirnow) + A*cos(dirnow);
      if (t <= D) {
        dirmin = dirnow;
      } else {
        dirmax = dirnow;
      }
    }
    if (A*sin(dirnow) + B*cos(dirnow) <= C) ans[i] = "YES";
    else ans[i] = "NO";
    // cout << nA << ' ' << nB << endl;
  }
  for (auto a: ans) cout << a << endl;
}
