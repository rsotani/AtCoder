#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> C(N);
  for (int i=0; i<N; i++) cin >> C[i];
  vector<int> S(N,0);
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      if (i==j) continue;
      if (C[i]%C[j]==0) S[i]++;
    }
  }
  double ans = 0;
  for (int i=0; i<N; i++){
    if (S[i]%2==0) ans += (S[i]+2)/(double)(2*S[i]+2);
    else ans += 0.5;
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
