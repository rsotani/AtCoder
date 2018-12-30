#include <bits/stdc++.h>
using namespace std;

struct edge { int to, cost; };
typedef pair<int, int> P;

const int MAX_V = 100100;
const float INF = INFINITY;
int V;
vector<edge> Gyen[MAX_V], Gsnuke[MAX_V];
int dyen[MAX_V], dsnuke[MAX_V];

void dijkstra(int s, bool yen){
  if (yen){
    priority_queue<P, vector<P>, greater<P> > que;
    fill(dyen, dyen+V, INF);
    dyen[s] = 0;
    que.push(P(0, s));

    while (!que.empty()){
      P p = que.top(); que.pop();
      int v = p.second;
      if (dyen[v] < p.first) continue;
      for (int i=0; i < G[v].size(); i++){
        edge e = Gyen[v][i];
        if (dyen[e.to] > dyen[v] + e.cost){
          dyen[e.to] = dyen[v] + e.cost;
          que.push(P(dyen[e.to], e.to));
        }
      }
    }
  } else {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(dsnuke, dsnuke+V, INF);
    dsnuke[s] = 0;
    que.push(P(0, s));

    while (!que.empty()){
      P p = que.top(); que.pop();
      int v = p.second;
      if (dsnuke[v] < p.first) continue;
      for (int i=0; i < Gsnuke[v].size(); i++){
        edge e = Gsnuke[v][i];
        if (dsnuke[e.to] > dsnuke[v] + e.cost){
          dsnuke[e.to] = dsnuke[v] + e.cost;
          que.push(P(dsnuke[e.to], e.to));
        }
      }
    }
  }
}

int main(){
  int n, m, s, t;
  cin >> n >> m >> s >> t;
  V = n;
  for (int i=0; i<m; i++){
    int u, v, a, b;
    cin >> u >> v >> a >> b;
    Gyen[]
  }
}
