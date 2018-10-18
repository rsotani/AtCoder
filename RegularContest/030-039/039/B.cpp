#include <bits/stdc++.h>
using namespace std;

const int md = 1e9+7;
int main(){
  int N, K;
  cin >> N >> K;
  vector<vector<int>> comb(305, vector<int>(305,0));
  comb[0][0] = 1;
  for (int i=1; i<=300; i++){
    for (int j=0; j<=i; j++){
      comb[i][j] += comb[i-1][j];
      if (j>0) comb[i][j] += comb[i-1][j-1];
      comb[i][j] %= md;
    }
  }
  if (K<N){
    cout << comb[N+K-1][K] << endl;
    return 0;
  }
  cout << comb[N][K%N] << endl;
}
