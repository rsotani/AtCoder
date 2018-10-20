#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, X;
  cin >> H >> W >> X;
  if (X>=H-2||X>=W-2){
    cout << -1 << endl;
    return 0;
  }
  vector<vector<char>> s(H, vector<char>(W));
  pair<int, int> start, goal;
  set<pair<int, int>> ino;
  for (int i=0; i<H; i++){
    string k;
    cin >> k;
    for (int j=0; j<W; j++){
      s[i][j] = k[j];
      if (s[i][j]=='S') start = make_pair(i,j);
      if (s[i][j]=='G') goal = make_pair(i,j);
      if (s[i][j]=='@') ino.insert(make_pair(i,j));
    }
  }
  for (auto k: ino){
    int y = k.first, x = k.second;
    for (int i = -X; i<=X; i++){
      if (y+i<0||y+i>=H) continue;
      int j = X-abs(i);
      if (x+j<W) s[y+i][x+j]='#';
      if (x-j>=0) s[y+i][x-j] = '#';
    }
  }
  if (s[goal.first][goal.second]=='#'){
    cout << -1 << endl;
    return 0;
  }
  queue<vector<int>> q;
  set<pair<int, int>> checked;
  q.push({start.first,start.second,0});
  s[start.first][start.second] = '#';
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      cout << s[i][j];
    }
    cout << endl;
  }
  while(!q.empty()){
    vector<int> now = q.front();
    // cout << now[0] << ' ' << now[1] << endl;
    q.pop();
    s[now[0]][now[1]]='#';
    if (now[0]==goal.first&&now[1]==goal.second){
      cout << now[2] << endl;
      return 0;
    }
    if (s[now[0]-1][now[1]] != '#') q.push({now[0]-1,now[1],now[2]+1});
    if (s[now[0]+1][now[1]] != '#') q.push({now[0]+1,now[1],now[2]+1});
    if (s[now[0]][now[1]-1] != '#') q.push({now[0],now[1]-1,now[2]+1});
    if (s[now[0]][now[1]+1] != '#') q.push({now[0],now[1]+1,now[2]+1});
  }
  // for (int i=0; i<H; i++){
  //   for (int j=0; j<W; j++){
  //     cout << s[i][j];
  //   }
  //   cout << endl;
  // }
  cout << -1 << endl;
}
