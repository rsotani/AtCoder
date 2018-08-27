#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  double xmean = 0;
  double ymean = 0;
  double csum = 0;
  vector<vector<double> > xyc(N, vector<double>(3));
  for (int i=0; i<N; i++){
    cin >> xyc[i][0] >> xyc[i][1] >> xyc[i][2];
    xmean += xyc[i][0]*xyc[i][2]; ymean += xyc[i][1]*xyc[i][2]; csum += xyc[i][2];
  }
  xmean /= csum; ymean /= csum;
  double ans = 0;
  for (int i=0; i<N; i++){
    ans = max(ans, max(abs(xyc[i][0]-xmean)*xyc[i][2],abs(xyc[i][1]-ymean)*xyc[i][2]));
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
