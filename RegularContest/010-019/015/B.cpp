#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> ans(6,0);
  for (int i=0; i<N; i++){
    double maxt, mint;
    cin >> maxt >> mint;
    if (maxt>=35) ans[0]++;
    else if (maxt>=30) ans[1]++;
    else if (maxt>=25) ans[2]++;
    if (mint>=25) ans[3]++;
    if ((mint<0) && (maxt>=0)) ans[4]++;
    if (maxt<0) ans[5]++;
  }
  cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << ' ' << ans[3] << ' ' << ans[4] << ' ' << ans[5] << endl;
}
