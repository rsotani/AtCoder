#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int> > txy(N+1,vector<int>(3,0));
  for (int i=1; i<N+1; i++){
    int t, x, y;
    cin >> t >> x >> y;
    txy[i][0] = t;
    txy[i][1] = x;
    txy[i][2] = y;
  }
  for (int i=0; i<N; i++){
    int dt = txy[i+1][0] - txy[i][0];
    int dx = abs(txy[i+1][1] - txy[i][1]);
    int dy = abs(txy[i+1][2] - txy[i][2]);
    if ((dx+dy > dt) || ((dx+dy)%2 != dt%2)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
