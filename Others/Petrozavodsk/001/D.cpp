#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 300030;
int par[MAX_N];
int rnk[MAX_N];
int N;

void init(){
  for (int i=0; i<N; i++){
    par[i] = i;
    rnk[i] = 0;
  }
}

int find(int x) {
  if (par[x] == x) {
    return x;
  } else {
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  if (x==y) return;
  if (rnk[x]<rnk[y]){
    par[x] = y;
  } else {
    par[y] = x;
    if (rnk[x]==rnk[y]) rnk[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}


int main(){
  int M;
  cin >> N >> M;
  init();
  vector<pair<int, long long>> a(N);
  for (int i=0; i<N; i++){
    a[i].first = i;
    cin >> a[i].second;
  }
  for (int i=0; i<M; i++){
    int x, y;
    cin >> x >> y;
    unite(x, y);
  }
  set<int> st;
  for (int i=0; i<N; i++) st.insert(find(i));
  int treenum = st.size();
  // cout << treenum << endl;
  sort(a.begin(), a.end(), [](const auto& a, const auto& b){return a.second<b.second;});
  if ((treenum-1)*2>N){
    cout << "Impossible" << endl;
    return 0;
  }
  if (treenum==1){
    cout << 0 << endl;
    return 0;
  }
  vector<int> checked(N,0);
  int count = 0;
  long long ans = 0;
  for (int i=0; i<N; i++){
    if (checked[find(a[i].first)]==0){
      ans += a[i].second;
      checked[find(a[i].first)]++;
    } else if (count<treenum-2){
      count++;
      ans += a[i].second;
    }
  }
  cout << ans << endl;
}
