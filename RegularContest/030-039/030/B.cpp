#include <bits/stdc++.h>
using namespace std;

int x[101];
map<int,set<int>> mp;

int dfs(int u, int v){
  int res = 0;
  for (auto k: mp[u]) if (k!=v) res += dfs(k,u);
  if (res) return res+2*!!(~v);
  return x[u]*2*!!(~v);
}

int main(){
  int n, k;
  cin >> n >> k;
  k--;
  for (int i=0; i<n; i++) cin >> x[i];
  for (int i=0; i<n-1; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    mp[a].insert(b);
    mp[b].insert(a);
  }
  cout << dfs(k, -1) << endl;
}
