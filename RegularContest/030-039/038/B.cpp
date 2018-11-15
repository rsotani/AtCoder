#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H+2, vector<char>(W+2,'#'));
  for (int i=1; i<=H; i++){
    for (int j=1; j<=W; j++){
      cin >> S[i][j];
    }
  }
  for (int i=H; i>0; i--){
    for (int j=W; j>0; j--){
      if (S[i][j]=='#') continue;
      if (S[i+1][j]=='W'||S[i][j+1]=='W'||S[i+1][j+1]=='W') S[i][j] = 'L';
      else S[i][j] = 'W';
    }
  }
  if (S[1][1]=='L') cout << "First" << endl;
  else cout << "Second" << endl;
}
