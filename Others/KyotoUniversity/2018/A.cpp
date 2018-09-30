#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> s(N), a(N);
  for (int i=0; i<N; i++) cin >> s[i];
  for (int i=0; i<N; i++) cin >> a[i];
  int ans = 0;
  for (int i=0; i<N; i++){
    ans = max(ans, s[i]*a[i]);
  }
  cout << ans << endl;
}
