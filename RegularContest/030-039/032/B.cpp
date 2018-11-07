#include <bits/stdc++.h>
using namespace std;

int MAX_N = 300300;
int n;
vector<int> par(MAX_N);
vector<int> rankk(MAX_N);

void init(){
  for (int i=1; i<=n; i++){
    par[i] = i;
    rankk[i] = 0;
  }
}

int find(int x){
  if (par[x] == x){
    return x;
  } else {
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  if (x == y) return;
  if (rankk[x] < rankk[y]){
    par[x] = y;
  } else {
    par[y] = x;
    if (rankk[x] == rankk[y]) rankk[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}

int main(){
  int N, M;
  cin >> N >> M;
  n = N;
  init();
  for (int i=0; i<M; i++){
    int a, b;
    cin >> a >> b;
    unite(a, b);
  }
  int ans=0;
  for (int i=1; i<=N; i++){
    if (i==par[i]) ans++;
  }
  cout << ans-1 << endl;
}
