#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<vector<int> > mp(N+1, vector<int>(N+1,0));
  for (int i=0; i<M; i++){
    int l, r;
    cin >> l >> r;
    mp[l][r]++;
  }
  for (int i=1; i<N+1; i++){
    for (int j=1; j<N+1; j++){
      mp[i][j] += mp[i][j-1]+mp[i-1][j]-mp[i-1][j-1];
    }
  }
  for (int i=0; i<Q; i++){
    int p, q;
    cin >> p >> q;
    cout << mp[q][q]-mp[q][p-1]-mp[p-1][q]+mp[p-1][p-1] << endl;
  }
}
