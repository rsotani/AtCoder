#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> R(N);
  for (int i=0; i<N; i++) cin >> R[i];
  sort(R.begin(), R.end());
  double score = 0;
  for (int i=N-K; i<N; i++){
      score = (score+R[i])/2.0;
  }
  cout << fixed << setprecision(10);
  cout << score << endl;
}
