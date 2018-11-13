#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 110;
int par[MAX_N];
int rnk[MAX_N];

void init(){
  for (int i=0; i<MAX_N; i++){
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
  int N;
  cin >> N;
  init();
  string s1, s2;
  cin >> s1 >> s2;
  for (int i=0; i<N; i++){
    if (('A'<=s1[i]&&s1[i]<='Z')&&('A'<=s2[i]&&s2[i]<='Z')){
      unite(s1[i]-'A'+1, s2[i]-'A'+1);
    }
  }
  map<int, long long> mp;
  for (int i=0; i<N; i++){
    if (('A'<=s1[i]&&s1[i]<='Z')&&('A'<=s2[i]&&s2[i]<='Z')){
      if (i==0) mp[find(s1[i]-'A'+1)] = 9;
      else if (mp[find(s1[i]-'A'+1)] == 0) mp[find(s1[i]-'A'+1)] = 10;
    } else if ('A'<=s1[i]&&s1[i]<='Z'){
      mp[find(s1[i]-'A'+1)] = 1;
    } else if ('A'<=s2[i]&&s2[i]<='Z'){
      mp[find(s2[i]-'A'+1)] = 1;
    }
  }
  long long ans = 1;
  for (auto k: mp){
    ans *= k.second;
  }
  cout << ans << endl;
}
