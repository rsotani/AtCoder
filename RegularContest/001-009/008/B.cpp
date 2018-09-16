#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  string name,kit;
  cin >> name >> kit;
  map<char, int> nm;
  map<char, int> kt;
  for (auto i: name) nm[i]++;
  for (auto i: kit) kt[i]++;
  int ans = 0;
  for (auto i: nm){
    if (kt[i.first]==0){
      cout << -1 << endl;
      return 0;
    }
    int tmp = ceil(i.second/(float)kt[i.first]);
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}
