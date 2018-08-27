#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  long long subsum = 0;
  for (int i=0; i<K; i++) subsum += a[i];
  long long ans = subsum;
  for (int i=0; i<N-K; i++){
    subsum -= a[i];
    subsum += a[i+K];
    ans += subsum;
  }
  cout << ans << endl;
}
