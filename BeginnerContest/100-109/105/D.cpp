#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, M;
  cin >> N >> M;
  vector<long long> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  unordered_map<long long, long long> mp;
  long long m=0;
  for (int i=0; i<N; i++){
    m += A[i];
    m %= M;
    if (mp.find(m) == mp.end()) mp[m] = 1;
    else mp[m] += 1;
  }
  long long ans = 0;
  for (auto m: mp){
    if (m.first==0){
      ans += m.second*(m.second+1)/2;
    } else {
      ans += m.second*(m.second-1)/2;
    }
  }
  cout << ans << endl;
}
