#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 400;
const int INF = 1e9;
int d[MAX_V][MAX_V];
int V, E;

void warshall_floyd(){
  for (int k=0; k<=V; k++){
    for (int i=0; i<=V; i++){
      for (int j=0; j<=V; j++) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }
  }
}

int main(){
  cin >> V >> E;
  for (int i=0; i<MAX_V; i++){
    for (int j=0; j<MAX_V; j++){
      if (i==j) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }
  vector<pair<int, int>> checklist;
  for (int i=0; i<E; i++){
    int u, v, l;
    cin >> u >> v >> l;
    if (u==1){
      checklist.push_back(make_pair(v,l));
    } else {
      d[u][v] = l;
      d[v][u] = l;
    }
  }
  warshall_floyd();
  int check = checklist.size();
  int ans = 1e9;
  for (int i=0; i<check-1; i++){
    for (int j=i+1; j<check; j++){
      ans = min(ans, checklist[i].second + d[checklist[i].first][checklist[j].first] + checklist[j].second);
    }
  }
  // for (int i=0; i<=V; i++){
  //   for (int j=0; j<=V; j++){
  //     cout << d[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
  if (ans < 1e9) cout << ans << endl;
  else cout << -1 << endl;
}
