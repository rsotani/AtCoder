#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e15;

int main(){
  int H, W, T;
  cin >> H >> W >> T;
  vector<string> S(H);
  pair<int, int> start, goal;
  for (int i=0; i<H; i++){
    cin >> S[i];
  }
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      if (S[i][j]=='S') start = make_pair(i,j);
      if (S[i][j]=='G') goal = make_pair(i,j);
    }
  }
  int lb = 1, ub = T, bef = 0;
  vector<int> diry = {1,0,-1,0}, dirx = {0,1,0,-1};
  while(true){
    int x = (lb + ub)/2;
    if (bef == x) break;
    vector<vector<long long>> d(H, vector<long long>(W, INF));
    d[start.first][start.second] = 0;
    while(true){
      bool update = false;
      for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
          if (d[i][j]!=INF){
            for (int k=0; k<4; k++){
              if (i+diry[k]<0||i+diry[k]>=H||j+dirx[k]<0||j+dirx[k]>=W) continue;
              int cost;
              if (S[i+diry[k]][j+dirx[k]]=='#') cost = x;
              else cost = 1;
              if (d[i+diry[k]][j+dirx[k]] > d[i][j] + cost){
                d[i+diry[k]][j+dirx[k]] = d[i][j] + cost;
                update = true;
              }
            }
          }
        }
      }
      if (!update) break;
    }
    // cout << "x: " << x << "goal: " << d[goal.first][goal.second] << endl;
    if (d[goal.first][goal.second] > T){
      ub = x;
    } else {
      lb = x;
    }
    bef = x;
  }
  cout << bef << endl;
}
