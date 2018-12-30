#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> a(N+1,0);
  for (int i=1; i<=N; i++) cin >> a[i];
  for (int i=N; i>=1; i--){
    long long check = a[i];
    for (int j=2; j<=N; j++){
      if (i*j>N) break;
      check += a[i*j];
    }
    // cout << i << ": " << check << endl;
    if (check < 0){
      cout << i << endl;
      a[i] = 0;
      for (int j=2; j<=N; j++){
        if (i*j>N) break;
        a[i*j]=0;
      }
    }
    // cout << a[i] << endl;
  }
  long long ans = 0;
  for (int i=1; i<=N; i++) ans += a[i];
  cout << ans << endl;
}
