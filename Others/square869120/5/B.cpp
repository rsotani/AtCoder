#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  double maxr = 200;
  vector<vector<int>> xyr(N, vector<int>(3));
  for (int i=0; i<N; i++){
    cin >> xyr[i][0] >> xyr[i][1] >> xyr[i][2];
    maxr = min(maxr,(double)xyr[i][2]);
  }

  vector<vector<int>> xy(M, vector<int>(2));
  for (int i=0; i<M; i++){
    cin >> xy[i][0] >> xy[i][1];
  }
  for (int i=0; i<M; i++){
    int x1 = xy[i][0], y1 = xy[i][1];
    double minr = 1e9;
    for (int j=0; j<N; j++){
      minr = min(minr, sqrt((x1-xyr[j][0])*(x1-xyr[j][0])+(y1-xyr[j][1])*(y1-xyr[j][1]))-xyr[j][2]);
    }
    for (int j=0; j<i; j++){
      minr = min(minr, sqrt((x1-xy[j][0])*(x1-xy[j][0])+(y1-xy[j][1])*(y1-xy[j][1]))/2.0);
    }
    maxr = min(maxr, minr);
  }
  cout << fixed << setprecision(10);
  cout << maxr << endl;
}
