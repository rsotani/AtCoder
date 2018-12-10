#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i=0; i<N; i++) cin >> p[i];
  sort(p.begin(), p.end());
  int ans = 0;
  for (int i=0; i<N; i++){
    if (i==N-1) ans += p[i]/2;
    else ans += p[i];
  }
  cout << ans << endl;
}
