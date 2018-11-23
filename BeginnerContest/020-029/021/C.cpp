#include <bits/stdc++.h>
using namespace std;

int main(){
  long long md = 1e9+7;
  int N;
  cin >> N;
  int a, b;
  cin >> a >> b;
  int M;
  cin >> M;
  map<int, set<int>> mp;
  for (int i=0; i<M; i++){
    int x, y;
    cin >> x >> y;
    mp[x].insert(y);
    mp[y].insert(x);
  }
  vector<long long> road(N+1, 0);
  vector<long long> len(N+1, -1);
  queue<pair<int, int>> que;
  road[a] = 1;
  len[a] = 0;
  que.push(make_pair(a,0));
  while (true){
    auto check = que.front();
    que.pop();
    for (auto k: mp[check.first]){
      if (len[k]==-1){
        que.push(make_pair(k,check.second+1));
        len[k] = check.second+1;
      }else if (len[k]==check.second-1){
        road[check.first] += road[k];
        road[check.first] %= md;
      }
    }
    if (check.first==b){
      cout << road[check.first] << endl;
      return 0;
    }
  }
}
