#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  long long ans = N;
  int count = 1;
  int bef = a[0];
  for (int i=1; i<N; i++){
    if (bef < a[i]) count++;
    else {
      for (int j=1; j<count; j++) ans += count - j;
      count = 1;
    }
    bef = a[i];
  }
  for (int j=1; j<count; j++) ans += count - j;
  cout << ans << endl;
}
