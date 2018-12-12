#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main(){
  int N; cin >> N;
  vector<int> c(N);
  for (int i=0; i<N; i++){
    cin >> c[i];
  }
  vector<int> dp(N,inf);
  for (int i=0; i<N; i++){
    *lower_bound(dp.begin(), dp.end(), c[i]) = c[i];
  }
  cout << N - (lower_bound(dp.begin(), dp.end(), inf) - dp.begin()) << endl;
}
