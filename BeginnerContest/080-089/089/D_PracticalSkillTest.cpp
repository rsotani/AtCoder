#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W, D;
  cin >> H >> W >> D;
  unordered_map<int, pair<int, int> > mp;
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      int a;
      cin >> a;
      mp[a] = make_pair(i+1,j+1);
    }
  }
  vector<int> val(H*W);
  for (int i=0; i<H*W; i++){
    if (i<D) val[i] = 0;
    else val[i] = val[i-D] + abs(mp[i+1].first-mp[i+1-D].first) + abs(mp[i+1].second-mp[i+1-D].second);
  }
  int Q;
  cin >> Q;
  vector<int> ans(Q);
  for (int i=0; i<Q; i++) {
    int l, r;
    cin >> l >> r;
    ans[i] = val[r-1] - val[l-1];
  }
  for (int i=0; i<Q; i++) cout << ans[i] << endl;
  return 0;
}
