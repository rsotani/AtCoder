#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  map<int, set<int>> mp;
  for (int i=0; i<M; i++){
    int a, b;
    cin >> a >> b;
    mp[a].insert(b);
    mp[b].insert(a);
  }
  // for (int i=1; i<=N; i++){
  //   for (auto k: mp[i]){
  //     cout << k << ' ';
  //   }
  //   cout << endl;
  // }
  for (int i=1; i<=N; i++){
    int ans=0;
    set<int> checked;
    for (auto k: mp[i]){
      for (auto l: mp[k]){
        if (l!=i&&mp[i].find(l)==mp[i].end()&&checked.find(l)==checked.end()){
          ans++;
          checked.insert(l);
        }
      }
    }
    cout << ans << endl;
  }
}
