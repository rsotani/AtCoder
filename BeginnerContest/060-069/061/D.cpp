#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e15;
const int MAX_V = 1010;
const int MAX_E = 2010;

struct edge{int from, to;
            long long cost;};

edge es[MAX_E];

long long d[MAX_V];
int N, M;

int main(){
  cin >> N >> M;
  for (int i=0; i<=N; i++){
    d[i] = -INF;
  }
  for (int i=0; i<M; i++){
    cin >> es[i].from >> es[i].to >> es[i].cost;
  }
  d[1] = 0;
  for (int i=0; i<N; i++){
    for (int j=0; j<M; j++){
      edge e = es[j];
      if (d[e.to] < d[e.from]+e.cost){
        d[e.to] = d[e.from]+e.cost;
      }
    }
  }
  long long currentcost = d[N];
  for (int i=0; i<N; i++){
    for (int j=0; j<M; j++){
      edge e = es[j];
      if (d[e.to] < d[e.from]+e.cost){
        d[e.to] = d[e.from]+e.cost;
      }
    }
  }

  if (currentcost!=d[N]){
    cout << "inf" << endl;
    return 0;
  }
  cout << d[N] << endl;
}
