#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> t(N);
  for (int i=0; i<N; i++) cin >> t[i];
  int slt = t[0] + t[1] + t[2];
  if (slt < K) {cout << 3 << endl; return 0;}
  for (int i=3; i<N; i++){
    slt += t[i]; slt -= t[i-3];
    if (slt < K) {cout << i+1 << endl; return 0;}
  }
  cout << -1 << endl;
}
