#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main(){
  int N, Ma, Mb;
  cin >> N >> Ma >> Mb;
  vector<vector<int>> abc(N, vector<int>(3));
  for (int i=0; i<N; i++){
    cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
  }
  vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(401, vector<int>(401, inf)));
  dp[0][0][0] = 0;
  for (int n=1; n<=N; n++){
    for (int i=0; i<401; i++){
      for (int j=0; j<401; j++){
        if (i==0&&j==0) dp[n][i][j] = 0;
        else {
          if (i-abc[n-1][0]<0||j-abc[n-1][1]<0) dp[n][i][j] = dp[n-1][i][j];
          else dp[n][i][j] = min(dp[n-1][i][j],dp[n-1][i-abc[n-1][0]][j-abc[n-1][1]]+abc[n-1][2]);
        }
      }
    }
  }
  int ans = inf;
  for (int i=1; i<400; i++){
    if (Ma*i>400||Mb*i>400) break;
    if (dp[N][Ma*i][Mb*i]<inf){
      ans = min(ans, dp[N][Ma*i][Mb*i]);
    }
  }
  if (ans < inf) cout << ans << endl;
  else cout << -1 << endl;
}
