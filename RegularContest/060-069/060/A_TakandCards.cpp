#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A;
  cin >> N >> A;
  vector<int> x(N);
  for (int i=0; i<N; i++) cin >> x[i];
  int X = *max_element(x.begin(),x.end());
  vector<int> y(N);
  for (int i=0; i<N; i++) y[i] = x[i] - A;
  vector<vector<long long> > dp(N+1, vector<long long>(2*N*X));
  for (int j=0; j<N+1; j++){
    for (int t=0; t<2*N*X; t++){
      if ((j==0) && (t==N*X)) dp[j][t] = 1;
      else if ((j>0) && ((t-y[j-1]<0) || (t-y[j-1]>2*N*X))) dp[j][t] = dp[j-1][t];
      else if ((j>0) && ((-1<t-y[j-1]) && (t-y[j-1]<2*N*X+1))) dp[j][t] = dp[j-1][t] + dp[j-1][t-y[j-1]];
      else dp[j][t] = 0;
    }
  }
  cout << dp[N][N*X] -1 << endl;
}
