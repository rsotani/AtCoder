#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  vector<vector<char>> C(r, vector<char>(c));
  for (int i=0; i<r; i++){
    for (int j=0; j<c; j++){
      cin >> C[i][j];
    }
  }
  int ans = 0;
  for (int i=0; i<r; i++){
    for (int j=0; j<c; j++){
      bool flag = true;
      if (i>0){
        if (C[i-1][j]=='#') flag = false;
      }
      if (j>0){
        if (C[i][j-1]=='#') flag = false;
      }
      if (flag&&C[i][j]=='.'){
        ans++;
        C[i][j] = '#';
      }
    }
  }
  cout << ans << endl;
}
