#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int> > ab(M, vector<int>(2));
  for (int i=0; i<M; i++) cin >> ab[i][0] >> ab[i][1];
  sort(ab.begin(), ab.end(), [](auto& x, auto& y){return x[0] < y[0];});
  int ans = 0;
  int minb = 100000000;
  int j = 0;
  for (int i=1; i<=N; i++){
    while((j<M) && (ab[j][0] <= i)){
      minb = min(minb, ab[j][1]);
      j++;
    }
    if (minb == i+1){
      ans++;
      minb = 100000000;
    }
  }
  cout << ans << endl;
}
