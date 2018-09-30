#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int> > C(H+1, vector<int>(W+1,0));
  for (int i=1; i<=H; i++){
    for (int j=1; j<=W; j++){
      int hoge;
      cin >> hoge;
      if ((i+j)%2==0) C[i][j] = hoge;
      else C[i][j] = -1*hoge;
    }
  }
  for (int i=1; i<=H; i++){
    for (int j=1; j<=W; j++){
      C[i][j] += (C[i-1][j] + C[i][j-1] - C[i-1][j-1]);
    }
  }
  int ans = 0;
  for (int i=1; i<=H; i++){
    for (int j=1; j<=W; j++){
      for (int k=i; k<=H; k++){
        for (int l=j; l<=W; l++){
          if (C[k][l]-C[i-1][l]-C[k][j-1]+C[i-1][j-1]==0) ans = max(ans, (k-i+1)*(l-j+1));
        }
      }
    }
  }
  cout << ans << endl;
}
