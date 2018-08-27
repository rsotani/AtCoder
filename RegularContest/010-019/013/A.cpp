#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, L, P, Q, R;
  cin >> N >> M >> L >> P >> Q >> R;
  vector<int> l = {P, Q, R};
  sort(l.begin(), l.end());
  int ans = 0;
  do {
    ans = max(ans, (N/l[0])*(M/l[1])*(L/l[2]));
  } while (next_permutation(l.begin(), l.end()));
  cout << ans << endl;
}
