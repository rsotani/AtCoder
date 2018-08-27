#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  int ans =  1;
  N -= K;
  if (N == 0) cout << 1 << endl;
  else cout << 1+ceil((double)N/(K-1)) << endl;
}
