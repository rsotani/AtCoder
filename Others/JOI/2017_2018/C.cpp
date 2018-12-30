#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      cin >> A[i][j];
    }
  }
  int ans = INF;
  for (int h=0; h<H; h++){
    for (int w=0; w<W; w++){
      int tmp = 0;
      for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
          tmp += min(abs(h-i), abs(j-w))*A[i][j];
        }
      }
      ans = min(ans, tmp);
    }
  }
  cout << ans << endl;
}
