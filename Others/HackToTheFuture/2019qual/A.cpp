#include <bits/stdc++.h>
using namespace std;

int main(){
// int main(int argc, char *argv[]){
  int N, M, L;
  // ifstream ifs(argv[1]);
  // ifs >> N >> M >> L;
  cin >> N >> M >> L;
  vector<string> S(N);
  for (int i=0; i<N; i++) {
    cin >> S[i];
    // ifs >> S[i];
  }
  vector<vector<char>> ans(M, vector<char>(M));
  for (int i=0; i<M; i++){
    for (int j=0; j<M; j++){
      if (i==0||j==0||i==M-1||j==M-1) ans[i][j] = '#';
      else ans[i][j] = '.';
    }
  }
  vector<vector<int>> score(M, vector<int>(M, 0));
  vector<int> xdir = {0, 1, 0, -1};
  vector<int> ydir = {-1, 0, 1, 0};
  for (int i=0; i<N; i++){
    int x=14, y=14;
    int befx = x, befy = y;
    int dir = 0;
    for (auto s: S[i]){
      if (s=='S') {
        x += xdir[dir];
        y += ydir[dir];
        if (x==0||x==M-1||y==0||y==M-1){
          befx = x;
          befy = y;
          x -= xdir[dir];
          y -= ydir[dir];
        }
      } else if (s=='L') {
        dir += 3;
        dir %= 4;
      } else {
        dir++; dir %= 4;
      }
    }
    score[x][y]++;
    if (score[x][y]>2){
      if (ans[befx][befy]=='.') ans[befx][befy] = 'D';
      else if (ans[befx][befy]=='D') ans[befx][befy]=='T';
      score[x][y] = 0;
    }
  }
  // ofstream ofs("out.txt");
  for (int i=0; i<M; i++){
    for (int j=0; j<M; j++){
      cout << ans[i][j];
      // ofs<< ans[i][j];
    }
    cout << endl;
    // ofs << endl;
  }
  // ofs << flush;
  return 0;
}
