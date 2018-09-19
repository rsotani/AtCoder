#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<long long> a;
  for (int i=0; i<N; i++){
    long long x;
    cin >> x;
    if (x < K) a.push_back(x);
  }
  if (a.size() == 0) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> Ks(K,0);
  Ks[0] = 1;
  for (long long k: a){
    for (int i=0; i<K; i++){
      if ((Ks[i] == 1) && (i+k<K)) Ks[i+k] = 1;
    }
  }
  int ans = 0;
  for (long long k: a){
    bool flag = true;
    for (int i=K-1; i>K-k-1; i--){
      if (Ks[i]==1) flag = false;
    }
    if (flag) ans++;
  }
  cout << ans << endl;
}
