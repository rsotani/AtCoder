#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> t(N);
  for (int i=0; i<N; i++) cin >> t[i];
  int ans = 1000000;
  for (int i=0; i<pow(2,N); i++){
    int meatr = 0;
    int meatl = 0;
    for (int j=0; j<N; j++){
      int m = pow(2,j);
      if (i&m) meatr += t[j];
      else meatl += t[j];
    }
    ans = min(ans, max(meatl,meatr));
  }
  cout << ans << endl;
}
