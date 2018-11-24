#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, K;
  cin >> N >> K;
  vector<long long> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  vector<long long> sums;
  for (int i=1; i<N; i++){
    a[i] += a[i-1];
  }
  for (int i=0; i<N; i++){
    for (int j=i; j<N; j++){
      if (i==0) sums.push_back(a[j]);
      else sums.push_back(a[j]-a[i-1]);
    }
  }
  // for (auto k: sums) cout << k << endl;
  long long check = 1;
  for (int i=0; i<60; i++) check *= 2;
  long long ans = 0;
  while(check){
    int count = 0;
    vector<long long> nxtsums;
    for (auto k: sums){
      if (k&check){
        count++;
        nxtsums.push_back(k);
        // cout << (check&k) << endl;
      }
    }
    if (count>=K){
      ans += check;
      sums = nxtsums;
    }
    check /= 2;
    // cout << sums.size() << endl;
  }
  cout << ans << endl;
}
