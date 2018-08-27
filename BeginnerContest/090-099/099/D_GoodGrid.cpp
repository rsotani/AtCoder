#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, C;
  cin >> N >> C;
  if (N == 1){
    cout << 0 << endl;
    return 0;
  }
  vector<vector<int> > D(C, vector<int>(C));
  for (int i=0; i<C; i++){
    for (int j=0; j<C; j++) cin >> D[i][j];
  }
  vector<int> res0;
  vector<int> res1;
  vector<int> res2;
  for (int i=1; i<N+1; i++){
    for (int j=1; j<N+1; j++){
      int c;
      cin >> c;
      if ((i+j)%3 == 0) res0.push_back(c);
      else if ((i+j)%3 == 1) res1.push_back(c);
      else res2.push_back(c);
    }
  }
  vector<int> score0(C);
  vector<int> score1(C);
  vector<int> score2(C);
  for (int i=0; i<C; i++){
    int score = 0;
    for (int x: res0) score += D[x-1][i];]
    score0[i] = score;
  }
  for (int i=0; i<C; i++){
    int score = 0;
    for (int x: res1) score += D[x-1][i];
    score1[i] = score;
  }
  for (int i=0; i<C; i++){
    int score = 0;
    for (int x: res2) score += D[x-1][i];
    score2[i] = score;
  }
  int ans = 1000000000;
  for (int i=0; i<C; i++){
    for (int j=0; j<C; j++){
      for (int k=0; k<C; k++){
        if ((i==j) || (j==k) || (k==i)) continue;
        else ans = min(ans, score0[i] + score1[j] + score2[k]);
      }
    }
  }
  cout << ans << endl;
}
