#include <bits/stdc++.h>
using namespace std;

pair<int, int> gg(int x, int y){
  if (x < y){
    string s = to_string(x);
    reverse(s.begin(), s.end());
    x = atoi(s.c_str());
  } else {
    string s = to_string(y);
    reverse(s.begin(), s.end());
    y = atoi(s.c_str());
  }
  if (x < y) y = y-x;
  else x = x-y;
  return make_pair(x, y);
}


int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int> > score(1000, vector<int>(1000,0));
  int ans = 0;
  for (int i=1; i<=N; i++){
    for (int j=1; j<=M; j++){
      int x=i, y=j;
      set<pair<int, int> > s;
      bool flag = false;
      while (true) {
        if (s.find(make_pair(x,y)) != s.end()) flag = true;
        s.insert(make_pair(x,y));
        if (score[x][y] == -1 || (x == 0) || (y == 0)) {
          for (auto k: s){
            score[k.first][k.second] = -1;
          }
          break;
        }
        if ((score[x][y] == 1) || (flag)){
          ans++;
          for (auto k: s){
            score[k.first][k.second] = 1;
          }
          // cout << x << "," << y << endl;
          break;
        }
        pair<int, int> p = gg(x, y);
        x = p.first;
        y = p.second;
      }
    }
  }
  cout << ans << endl;
}
