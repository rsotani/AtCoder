#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int md = 1000000007;
  int Slen = S.size();
  vector<vector<long long> > dp(Slen+1, vector<long long>(4,0));
  string ABC = "ABC";
  for (int i=Slen; i>-1; i--){
    for (int j=0; j<4; j++){
      if (i==Slen){
        if (j==3) dp[i][j] = 1;
        else dp[i][j] = 0;
      } else {
        if (j==3){
          if (S[i] == '?') dp[i][j] = 3*dp[i+1][j]%md;
          else dp[i][j] = dp[i+1][j]%md;
        } else {
          int m1=1, m2=0;
          if (S[i] == '?') m1 = 3;
          if ((S[i] == '?') || (S[i] == ABC[j])) m2 = 1;
          dp[i][j] = (m1*dp[i+1][j]%md + m2*dp[i+1][j+1]%md)%md;
        }
      }
    }
  }
  cout << dp[0][0] << endl;
}
