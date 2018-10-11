#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, M;
  cin >> N >> M;
  vector<vector<long long> > lrs(N, vector<long long>(3));
  for (int i=0; i<N; i++) cin >> lrs[i][0] >> lrs[i][1] >> lrs[i][2];
  vector<long long> juwel(M+2,0);
  long long scoresum = 0;
  for (int i=0; i<N; i++){
    scoresum += lrs[i][2];
    juwel[lrs[i][0]] += lrs[i][2];
    juwel[lrs[i][1]+1] -= lrs[i][2];
  }
  for (int i=1; i<=M; i++) juwel[i] += juwel[i-1];
  long long ans = 0;
  for (int i=1; i<=M; i++){
    ans = max(ans, scoresum-juwel[i]);
  }
  cout << ans << endl;
}
