#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<long long> X(N);
  for (int i=0; i<N; i++) cin >> X[i];
  vector<long long> Xsum(N);
  Xsum[0] = X[0];
  for (int i=1; i<N; i++) Xsum[i] = Xsum[i-1] + X[i];
  vector<long long> ans(Q);
  for (int i=0; i<Q; i++){
    long long C, D;
    cin >> C >> D;
    int lb = lower_bound(X.begin(),X.end(),C-D)-X.begin();
    int cn = lower_bound(X.begin(),X.end(),C)-X.begin();
    int ub = lower_bound(X.begin(),X.end(),C+D)-X.begin();
    // cout << lb << ' ' << cn << ' ' << ub << endl;
    long long tmpans = 0;
    tmpans += (N-(ub-lb))*D;
    if (cn>lb){
      tmpans += (cn-lb)*C - Xsum[cn-1];
      if (lb>0) tmpans += Xsum[lb-1];
    }
    if (ub>cn){
      tmpans += Xsum[ub-1] - (ub-cn)*C;
      if (cn>0)tmpans -= Xsum[cn-1];
    }
    ans[i] = tmpans;
  }
  for (int i=0; i<Q; i++) cout << ans[i] << endl;
}
