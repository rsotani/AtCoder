#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  vector<int> a(A+1,0);
  for (int i=0; i<A; i++) cin >> a[i];
  vector<int> b(B+1,0);
  for (int i=0; i<B; i++) cin >> b[i];
  vector<vector<int> > dp(A+1, vector<int>(B+1,0));
  for (int i=0; i<A+1; i++){
    for (int j=0; j<B+1; j++){
      if ((i==0) && (j==0)) continue;
      else if (i==0){
        if (j==1) dp[i][j] = b[B-j];
        else dp[i][j] = dp[i][j-2] + b[B-j];
      } else if (j==0){
        if (i<2) dp[i][j] = a[A-i];
        else dp[i][j] = dp[i-2][j] + a[A-i];
      } else if ((i==1) && (j==1)){
        dp[i][j] = max(a[A-i],b[B-j]);
      } else {
        if (dp[i-1][j] < dp[i][j-1]){
          if (i == 1) dp[i][j] = dp[i-1][j-1] + a[A-i];
          else dp[i][j] = min(dp[i-2][j], dp[i-1][j-1]) + a[A-i];
        } else {
          if (j==1) dp[i][j] = dp[i-1][j-1] + b[B-j];
          else dp[i][j] = min(dp[i][j-2],dp[i-1][j-1]) + b[B-j];
        }
      }
    }
  }
  // for (int i=0; i<A+1; i++){
  //   for (int j=0; j<B+1; j++){
  //     cout << dp[i][j] << "  ";
  //   }
  //   cout << endl;
  // }
  cout << dp[A][B] << endl;
}
