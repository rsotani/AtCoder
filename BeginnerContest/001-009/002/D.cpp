#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int>> fre(N+1, vector<int>(N+1, 0));
  for (int i=0; i<M; i++){
    int x, y;
    cin >> x >> y;
    fre[x][y]++;
    fre[y][x]++;
  }
  int ans = 0;
  for (int i=0; i<(1<<N); i++){
    int check = i;
    vector<int> s;
    for (int j=1; j<=N; j++){
      if (check&1){
        s.push_back(j);
      }
      check >>= 1;
    }
    int Ssize = s.size();
    bool flag = false;
    for (int x=0; x<Ssize-1; x++){
      for (int y=x+1; y<Ssize; y++){
        if (fre[s[x]][s[y]]==0){
          flag = true;
          break;
        }
      }
      if (flag) break;
    }
    if (!flag) ans = max(ans, Ssize);
  }
  cout << ans << endl;
}
