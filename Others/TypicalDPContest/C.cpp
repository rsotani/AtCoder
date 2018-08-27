#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;
  int member = 1;
  for (int i=0; i<K; i++) member *= 2;
  vector<int> r(member);
  for (int i=0; i<member; i++) cin >> r[i];
  vector<vector<double> > dp(K+1,vector<double>(member));
  int rival = 1;
  for (int i=0; i<K+1; i++){
    for (int j=0; j<member; j++){
      if (i==0) {dp[i][j] = 1.0; continue;}
      if (j%(2*rival) < rival){
        for (int k=rival; k<2*rival; k++){
          dp[i][j] += dp[i-1][j]*dp[i-1][j+k-j%rival]*1.0/(1.0+pow(10.0,(r[j+k-j%rival]-r[j])/400.0));
          //cout << (double)(1.0+pow(10.0,(double)(r[j+k]-r[j])/400.0)) << endl;
          //cout << "j+k" << j+k-j%rival << endl;
          //cout << "j" << j << endl;
        }
      } else {
        for (int k=rival; k>0; k--){
          dp[i][j] += dp[i-1][j]*dp[i-1][j-k-j%rival]*1.0/(1.0+pow(10.0,(r[j-k-j%rival]-r[j])/400.0));
          //cout << "j-k" << j-k-j%rival << endl;
          //cout << "j" << j << endl;
        }
      }
    }
    if (i>0) rival *= 2;
  }
  cout << fixed << setprecision(10);
  for (int i=0; i<member; i++) cout << dp[K][i] << endl;
}
