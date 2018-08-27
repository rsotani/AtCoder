#include<bits/stdc++.h>
using namespace std;

int dps(unorderd_map mp, set alp){

}

int main(){
  int N, M;
  cin >> N >> M;
  unorderd_map<int, set<int> > mp;
  for (int i=0; i<M; i++){
    int a, b;
    cin >> a >> b;
    mp[a].insert(b);
    mp[b].insert(a);
  }
  set<int> alp;
  alp.insert(1);

}
