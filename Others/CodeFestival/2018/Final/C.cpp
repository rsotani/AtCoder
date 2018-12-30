#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> Plan(N);
  map<int, int> mp;
  for (int i=0; i<N; i++){
    int A, B;
    cin >> A >> B;
    Plan[i] = A;
    mp[A] = B;
  }
  sort(Plan.begin(), Plan.end());
  int M;
  cin >> M;
  vector<int> ans(M);
  for (int i=0; i<M; i++){
    int T;
    cin >> T;
    int k = lower_bound(Plan.begin(),Plan.end(),T)-Plan.begin();
    if (k==0){
      ans[i] = mp[Plan[k]];
    } else if(k<N) {
      ans[i] = min(mp[Plan[k-1]]+T-Plan[k-1],mp[Plan[k]]);
    } else {
      ans[i] = mp[Plan[k-1]]+T-Plan[k-1];
    }
    // cout << k << ' ' << T << endl;
  }
  for (auto k: ans) cout << k << endl;
}
