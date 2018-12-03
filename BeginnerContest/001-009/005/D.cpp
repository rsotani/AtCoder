#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int>> D(N, vector<int>(N));
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      cin >> D[i][j];
      if (i>0) D[i][j] += D[i-1][j];
      if (j>0) D[i][j] += D[i][j-1];
      if (i>0&&j>0) D[i][j] -= D[i-1][j-1];
    }
  }
  vector<int> ans(N*N+1, 0);
  for (int i=1; i<=N; i++){
    for (int j=1; j<=N; j++){
      for (int x=i-1; x<N; x++){
        for (int y=j-1; y<N; y++){
          int tmp = 0;
          tmp += D[x][y];
          if (x-i>=0) tmp -= D[x-i][y];
          if (y-j>=0) tmp -= D[x][y-j];
          if (x-i>=0&&y-j>=0) tmp += D[x-i][y-j];
          ans[i*j] = max(ans[i*j], tmp);
        }
      }
    }
  }
  int Q; cin >> Q;
  for (int q=0; q<Q; q++){
    int P;
    cin >> P;
    int score = 0;
    for (int i=1; i<=P; i++){
      score = max(score, ans[i]);
    }
    cout << score << endl;
  }
}
