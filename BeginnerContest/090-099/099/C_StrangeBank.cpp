#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> check9;
  vector<int> check6;
  int i = 9;
  int j = 6;
  while(i<100000){
    check9.push_back(i);
    i *= 9;
  }
  while(j<100000){
    check6.push_back(j);
    j *= 6;
  }
  vector<int> dp(100001,100000);
  for (int i=0; i<100001; i++){
    if (i<6) dp[i] = i;
    else{
      int k = check9.size() - 1;
      while (k > -1){
        if (check9[k] > i) k--;
        else{
          dp[i] = min(dp[i],dp[i-check9[k]]+1);
          k--;
        }
      }
      int l = check6.size() - 1;
      while (l > -1){
        if (check6[l] > i) l--;
        else{
          dp[i] = min(dp[i],dp[i-check6[l]]+1);
          l--;
        }
      }
    }
  }
  cout << dp[N] << endl;
}
