#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  for (int i=0; i<N; i++) cin >> h[i];
  sort(h.begin(), h.end());
  int ans = 1e9;
  for (int i=0; i<N-K+1; i++){
    ans = min(ans, h[i+K-1]-h[i]);
  }
  cout << ans << endl;
}
