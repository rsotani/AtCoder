#include <bits/stdc++.h>
using namespace std;

int main(){
  int R, C, K;
  cin >> R >> C >> K;
  int N;
  cin >> N;
  vector<int> Row(R,0), Column(C,0);
  vector<pair<int, int>> rc(N);
  for (int i=0; i<N; i++){
    int r, c;
    cin >> r >> c;
    Row[r-1]++;
    Column[c-1]++;
    rc[i] = make_pair(r-1,c-1);
  }
  long long ans = 0;
  for (int i=0; i<N; i++){
    if (Row[rc[i].first]+Column[rc[i].second]==K) ans--;
    else if (Row[rc[i].first]+Column[rc[i].second]==K+1) ans++;
  }
  sort(Column.begin(), Column.end());
  for (int i=0; i<R; i++){
    int check = Row[i];
    auto result = equal_range(Column.begin(), Column.end(),K-check);
    long long hoge = result.second-result.first;
    if (hoge>0) ans += hoge;
  }
  cout << ans << endl;
}
