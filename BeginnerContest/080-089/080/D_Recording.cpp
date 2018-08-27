#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, C;
  cin >> N >> C;
  vector<vector<int> > Using(100001, vector<int>(C,0));
  for (int i=0; i<N; i++){
    int s, t, c;
    cin >> s >> t >> c;
    for (int j=s-1; j<t; j++) Using[j][c-1] = 1;
  }
  int ans = 0;
  for (int i=0; i<100001; i++){
    int sc = 0;
    for (int j=0; j<C; j++) sc += Using[i][j];
    ans = max(ans, sc);
  }
  cout << ans << endl;
}
