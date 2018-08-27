#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i; i<N; i++) cin >> A[i];
  unordered_map<int, int> mp;
  for (int x: A){
    if (mp.find(x) == mp.end()) mp[x] = 1;
    else mp[x] += 1;
  }
  int ans = mp.size();
  int count = 0;
  for (auto x = mp.begin(); x != mp.end(); x++){
    if (x->second %2 == 0) count += 1;
  }
  if (count % 2 == 1) ans -= 1;
  cout << ans << endl;
}
