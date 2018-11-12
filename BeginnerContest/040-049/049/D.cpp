#include <bits/stdc++.h>
using namespace std;

const static int MAX_N = 300030;
int parK[MAX_N];
int rnkK[MAX_N];
int parL[MAX_N];
int rnkL[MAX_N];
int N;

void init(){
  for (int i=1; i<=N; i++){
    parK[i] = i;
    rnkK[i] = 0;
    parL[i] = i;
    rnkL[i] = 0;
  }
}

int find(int x, char state) {
  if (state=='K'){
    if (parK[x] == x) {
      return x;
    } else {
      return parK[x] = find(parK[x],'K');
    }
  } else {
    if (parL[x] == x) {
      return x;
    } else {
      return parL[x] = find(parL[x],'L');
    }
  }
}

void unite(int x, int y, char state){
  if (state=='K'){
    x = find(x,state);
    y = find(y,state);
    if (x==y) return;
    if (rnkK[x]<rnkK[y]){
      parK[x] = y;
    } else {
      parK[y] = x;
      if (rnkK[x]==rnkK[y]) rnkK[x]++;
    }
  } else {
    x = find(x,state);
    y = find(y,state);
    if (x==y) return;
    if (rnkL[x]<rnkL[y]){
      parL[x] = y;
    } else {
      parL[y] = x;
      if (rnkL[x]==rnkL[y]) rnkL[x]++;
    }
  }
}

bool same(int x, int y, char state){
  return find(x,state) == find(y,state);
}

int main(){
  int K, L;
  cin >> N >> K >> L;
  init();
  for (int i=0; i<K; i++){
    int p, q;
    cin >> p >> q;
    unite(p, q, 'K');
  }
  for (int i=0; i<L; i++){
    int r, s;
    cin >> r >> s;
    unite(r, s, 'L');
  }
  map<pair<int,int>, int> mp;
  for (int i=1; i<=N; i++){
    mp[make_pair(find(i,'K'),find(i,'L'))]++;
  }
  for (int i=1; i<=N; i++){
    if (i>1) cout << ' ' ;
    cout << mp[make_pair(find(i,'K'),find(i,'L'))];
  }
  cout << endl;
}
