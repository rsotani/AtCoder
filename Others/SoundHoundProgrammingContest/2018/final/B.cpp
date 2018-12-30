#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> b(N);
  for (int i=0; i<N; i++) cin >> b[i];
  vector<long long> dp1(N+1,0);
  vector<long long> dp2(N+1,0);
  for (int i=N-1; i>N-K-1; i--){
    dp1[i] = dp1[i+1] + b[i];
    dp2[i] = max(dp1[i], dp2[i+1]);
  }
  for (int i=N-K; i>-1; i--){
    dp1[i] = max(dp1[i+1]+b[i],dp2[i+K]);
    dp2[i] = max(dp1[i], dp2[i+1]);
  }
  cout << dp1[0] << endl;
}
