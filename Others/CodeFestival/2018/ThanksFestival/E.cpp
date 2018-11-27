#include <bits/stdc++.h>
using namespace std;

const long long md = 1e9+7;

int main(){
  int T;
  cin >> T;
  vector<int> a(T);
  for (int i=0; i<T; i++){
    cin >> a[i];
  }
  vector<vector<long long>> dp(T+1, vector<long long>(601,0));
  for (int i=1; i<T+1; i++){
    for (int j=0; j<601; j++){
      if (a[i-1]>=j) dp[i][j]++;
      for (int k=0; k<=a[i-1]; k++){
        if (j<=k) break;
        if (j-k>300) continue;
        dp[i][j] += dp[i-1][(j-k)*2];
        dp[i][j] %= md;
      }
    }
  }
  vector<int> check = {2,4,8,16,32,64,128,256,512};
  long long ans = 0;
  for (int i=1; i<=T; i++){
    ans += dp[i][1];
    ans %= md;
  }
  for (auto k: check){
    ans += dp[T][k];
    ans %= md;
  }
  cout << ans << endl;
}
