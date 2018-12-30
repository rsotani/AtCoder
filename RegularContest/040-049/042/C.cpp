#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
  int N, P;
  cin >> N >> P;
  vector<vector<int>> dp(N+1,vector<int>(P+1,-INF));
  vector<pair<int, int>> ab(N);
  for (int i=0; i<N; i++) cin >> ab[i].first >> ab[i].second;
  for (int i=1; i<=N; i++){
    for (int j=0; j<=P; j++){
      if (j==0) dp[i][j] = 0;
      else if (j-ab[i-1].first < 0) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j], dp[i-1][j-ab[i-1].first]+ab[i-1].second);
    }
  }
  int ans = 0;
  for (int i=0; i<=P; i++){
    ans = max(ans, dp[N][i]);
  }
  cout << ans << endl;
}
