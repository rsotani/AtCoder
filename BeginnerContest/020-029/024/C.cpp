#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D, K;
  cin >> N >> D >> K;
  vector<pair<int, int> > LR(D);
  for (int i=0; i<D; i++){
    int L, R;
    cin >> L >> R;
    LR[i] = make_pair(L,R);
  }
  vector<pair<int, int> > ST(K);
  for (int i=0; i<K; i++){
    int S, T;
    cin >> S >> T;
    ST[i] = make_pair(S,T);
  }
  vector<int> ans(K,1);
  for (int i=0; i<D; i++){
    for (int j=0; j<K; j++){
      if (ans[j] <= i) continue;
      if (ST[j].first<ST[j].second){
        if ((ST[j].first>=LR[i].first)&&(ST[j].second<=LR[i].second)) continue;
        ans[j]++;
        if ((ST[j].first>=LR[i].first)&&(ST[j].first<LR[i].second)) ST[j].first = LR[i].second;
      }
      else if (ST[j].first>ST[j].second){
        if ((ST[j].second>=LR[i].first)&&(ST[j].first<=LR[i].second)) continue;
        ans[j]++;
        if ((ST[j].first<=LR[i].second)&&(ST[j].first>LR[i].first)) ST[j].first = LR[i].first;
      }
    }
  }
  for (int i=0; i<K; i++) cout << ans[i] << endl;
}
