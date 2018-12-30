#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string C;
  cin >> C;
  string hoge = "ABXY";
  int ans = 1e9;
  for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
      for (int l=0; l<4; l++){
        for (int m=0; m<4; m++){
          string R = "", L="";
          R += hoge[i];
          R += hoge[j];
          L += hoge[l];
          L += hoge[m];
          // cout << R << ' ' << L << endl;
          if (L==R) continue;
          vector<int> dp(N+1);
          for (int k=0; k<N+1; k++) dp[k] = k;
          for (int k=2; k<N+1; k++){
            dp[k] = dp[k-1]+1;
            if (C[k-2]==R[0]&&C[k-1]==R[1]){
              dp[k] = min(dp[k], dp[k-2]+1);
            }
            if (C[k-2]==L[0]&&C[k-1]==L[1]){
              dp[k] = min(dp[k], dp[k-2]+1);
            }
          }
          ans = min(ans, dp[N]);
        }
      }
    }

  }
  cout << ans << endl;
}
