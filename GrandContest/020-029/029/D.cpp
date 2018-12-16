#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, N;
  cin >> H >> W >> N;
  int ans = H;
  vector<pair<int, int>> XY(N);
  for (int i=0; i<N; i++){
    cin >> XY[i].first >> XY[i].second;
  }
  sort(XY.begin(), XY.end(), [](const auto& a, const auto& b){return (a.first==b.first)? a.second < b.second : a.first < b.first;});
  int curX = 0;
  int posY = 0;
  bool flag = false;
  for (int i=0; i<N; i++){
    // cout << i << endl;
    if (curX < XY[i].first) {
      if (curX==0) posY--;
      posY += XY[i].first - curX;
      curX = XY[i].first;
    }
    if (XY[i].second <= posY) {
      flag = true;
      break;
    }
    if (XY[i].second == posY+1&&XY[i].first!=1) posY--;
  }
  if (flag) cout << curX-1 << endl;
  else cout << H << endl;
}
