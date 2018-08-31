#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int> > xy(N, vector<int>(2));
  for (int i=0; i<N; i++){
    cin >> xy[i][0] >> xy[i][1];
  }
  double ans = 0;
  for (int i=0; i<N; i++){
    for (int j=i+1; j<N; j++){
      ans = max(ans, (double)sqrt((xy[i][0]-xy[j][0])*(xy[i][0]-xy[j][0])+(xy[i][1]-xy[j][1])*(xy[i][1]-xy[j][1])));
    }
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
