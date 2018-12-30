#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<vector<int>> grid(2*K, vector<int>(2*K, 0));
  for (int i=0; i<N; i++){
    int x, y;
    char c;
    cin >> x >> y >> c;
    if (c=='W') y+=K;
    x %= 2*K; y %= 2*K;
    grid[x][y]++;
    grid[x+K][y]--;
    grid[x][y+K]--;
    grid[x+K][y+K]++;
  }
