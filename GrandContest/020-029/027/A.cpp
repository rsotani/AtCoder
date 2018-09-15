#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  int ans = 0;
  sort(a.begin(), a.end());
  for (int i=0; i<N; i++){
    if (a[i]>x) break;
    if (i != N-1){
      ans++;
      x -= a[i];
    }
    else {
      if (x == a[i]) ans++;
    }
  }
  cout << ans << endl;
}
