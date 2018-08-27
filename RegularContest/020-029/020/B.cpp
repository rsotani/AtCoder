#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, c;
  cin >> n >> c;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  unordered_map<int, int> odd;
  unordered_map<int, int> evn;
  for (int i=1; i<11; i++){
    odd[i] = 0;
    evn[i] = 0;
  }
  for (int i=0; i<n; i++){
    if (i%2 == 0) evn[a[i]]++;
    else odd[a[i]]++;
  }
  int ans = 1e9;
  for (auto i: evn){
    for (auto j: odd){
      if (i.first == j.first) continue;
      ans = min(ans, (n-i.second-j.second)*c);
    }
  }
  cout << ans << endl;
}
