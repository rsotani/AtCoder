#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  int N; cin >> N;
  vector<pair<int, int>> xy(N);
  for (int i=0; i<N; i++){
    cin >> xy[i].first >> xy[i].second;
  }
  double r = 1e9;
  for(int i=0; i<N; i++){
    int x1=xy[i].first, y1=xy[i].second,
        x2=xy[(i+1)%N].first, y2=xy[(i+1)%N].second;
    r = min(r, abs(-x*(y2-y1)+y*(x2-x1)+y2*x1-x2*y1)/(double)(sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1))));
  }
  cout << fixed << setprecision(10);
  cout << r << endl;
}
