#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e15;

int main(){
  long long N, W;
  cin >> N >> W;
  vector<pair<long long, long long>> vw(N);
  long long  maxv=0, maxw=0;
  for (int i=0; i<N; i++){
    cin >> vw[i].first >> vw[i].second;
    maxv = max(vw[i].first, maxv);
    maxw = max(vw[i].second, maxw);
  }
  if (maxv <= 1000){
    vector<vector<long long>> dp(N+1, vector<long long>(200001, INF));
    for (int i=0; i<=N; i++){
      for (int j=0; j<=200000; j++){
        if (j==0) dp[i][j] = 0;
        else if (i==0) continue;
        else {
          if (j-vw[i-1].first>=0 && dp[i-1][j-vw[i-1].first]+vw[i-1].second <= W)
            dp[i][j] = min(dp[i-1][j], dp[i-1][j-vw[i-1].first]+vw[i-1].second);
          else dp[i][j] = dp[i-1][j];
        }
      }
    }
    long long ans = 0;
    for (int i=200000;;i--){
      if (dp[N][i]<INF){
        ans = i;
        break;
      }
    }
    cout << ans << endl;
  } else if (maxw <= 1000){
    vector<vector<long long>> dp(N+1, vector<long long>(200001, -INF));
    for (int i=0; i<=N; i++){
      for (int j=0; j<=200000; j++){
        if (j==0) dp[i][j] = 0;
        else if (i==0) continue;
        else {
          if (j-vw[i-1].second>=0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-vw[i-1].second]+vw[i-1].first);
          else dp[i][j] = dp[i-1][j];
        }
      }
    }
    long long ans = 0;
    for (int i=0; i<=W; i++) {
      ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
  } else {
    vector<pair<long long, long long>> A, B;
    for (int i=0; i<N; i++){
      if (i<N/2) A.push_back(vw[i]);
      else B.push_back(vw[i]);
    }
    vector<pair<long long, long long>> Alist, Blist;
    for (int i=0; i<(1<<N/2); i++){
      int hoge = i;
      int check = 0;
      pair<long long, long long> VW = make_pair(0, 0);
      while(hoge){
        if (hoge&1) {
          VW.first += A[check].first;
          VW.second += A[check].second;
        }
        hoge >>= 1;
        check++;
      }
      if (VW.second <= W) Alist.push_back(VW);
    }
    sort(Alist.begin(), Alist.end(), [](const auto& a, const auto& b){return (a.second==b.second)? a.first > b.first : a.second < b.second;});
    vector<long long> Af = {0};
    map<long long, long long> Amp;
    Amp[0] = 0;
    long long best = 0;
    for (auto k: Alist){
      if (best < k.first){
        best = k.first;
        Af.push_back(k.second);
        Amp[k.second] = k.first;
      }
    }
    for (int i=0; i<(1<<N-N/2); i++){
      int hoge = i;
      int check = 0;
      pair<long long, long long> VW = make_pair(0, 0);
      while(hoge){
        if (hoge&1) {
          VW.first += B[check].first;
          VW.second += B[check].second;
        }
        hoge >>= 1;
        check++;
      }
      if (VW.second <= W) Blist.push_back(VW);
    }
    sort(Blist.begin(), Blist.end(), [](const auto& a, const auto& b){return (a.second==b.second)? a.first > b.first : a.second < b.second;});
    vector<long long> Bf = {0};
    map<long long, long long> Bmp;
    Bmp[0] = 0;
    best = 0;
    for (auto k: Blist){
      if (best < k.first){
        best = k.first;
        Bf.push_back(k.second);
        Bmp[k.second] = k.first;
      }
    }
    // for (auto k: Af) cout << k << endl;
    // for (auto k: Bf) cout << k << endl;
    long long ans = 0;
    for (auto k: Af){
      long long tmp = Amp[k];
      int it = (upper_bound(Bf.begin(), Bf.end(), W-k)-Bf.begin());
      it--;
      // cout << it << endl;
      tmp += Bmp[Bf[it]];
      ans = max(tmp, ans);
    }
    cout << ans << endl;
  }
}
