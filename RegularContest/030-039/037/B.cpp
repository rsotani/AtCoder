#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> checked(N+1,0);
  map<int, set<int>> mp;
  for (int i=0; i<M; i++){
    int u, v;
    cin >> u >> v;
    mp[u].insert(v);
    mp[v].insert(u);
  }
  set<int> hoge;
  int i=1;
  int count=0;
  int tcount=1;
  while(hoge.size()<N){
    for (int j=i; j<=N; j++){
      if (checked[j]==0){
        i=j; break;
      }
    }
    checked[i] = tcount;
    queue<pair<int, int>> que;
    que.push(make_pair(i,-1));
    bool tree = true;
    // cout << i << endl;
    while(!que.empty()){
      auto top = que.front();
      que.pop();
      // cout << top.first << endl;
      checked[top.first] = tcount;
      hoge.insert(top.first);
      for (auto k: mp[top.first]){
        if (k==top.second) continue;
        if (checked[k] > 0){
          tree = false;
          continue;
        }
        que.push(make_pair(k,top.first));
      }
    }
    if (tree) count++;
    tcount++;
  }
  cout << count << endl;
}
