#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  char s[N+2][M+2];
  for(int i=0; i<M+2; i++) s[0][i] = '#';
  for (int i=1; i<N+1; i++) {
    string a;
    cin >> a;
    s[i][0] = '#';
    for (int j=0; j<M; j++) s[i][j+1] = a[j];
    s[i][M+1] = '#';
  }
  for (int i=0; i<M+2; i++) s[N+1][i] = '#';
  long long ans = 0;
  vector<vector<vector<int> > > score(N+2,vector<vector<int>>(M+2, vector<int>(4,0)));
  for (int i=1; i<N+1; i++){
    for (int j=1; j<M+1; j++){
      if (s[i-1][j] == '.') score[i][j][0] = score[i-1][j][0] + 1;
      if (s[N+2-i][j] == '.') score[N+1-i][j][1] = score[N+2-i][j][1] + 1;
      if (s[i][j-1] == '.') score[i][j][2] = score[i][j-1][2] + 1;
      if (s[i][M+2-j] == '.') score[i][M+1-j][3] = score[i][M+2-j][3] + 1;
    }
  }
  for (int i=1; i<N+1; i++){
    for (int j=1; j<M+1; j++){
      if (s[i][j] == '#') continue;
      ans += (score[i][j][0]+score[i][j][1])*(score[i][j][2]+score[i][j][3]);
    }
  }
  cout << ans << endl;
}
