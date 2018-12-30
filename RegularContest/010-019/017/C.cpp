#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, X;
  cin >> N >> X;
  vector<long long> A(N/2), B(N-N/2);
  for (int i=0; i<N; i++){
    if (i<N/2)  cin >> A[i];
    else cin >> B[i-N/2];
  }
  vector<long long> Alst, Blst;
  for (int i=0; i<(1<<N/2); i++){
    long long check = i;
    long long tmp = 0;
    for (int j=0; j<N/2; j++){
      if (check&1) tmp += A[j];
      check >>= 1;
    }
    Alst.push_back(tmp);
  }
  for (int i=0; i<(1<<(N-N/2)); i++){
    long long check = i;
    long long tmp = 0;
    for (int j=0; j<N-N/2; j++){
      if (check&1) tmp += B[j];
      check >>= 1;
    }
    Blst.push_back(tmp);
  }
  sort(Blst.begin(), Blst.end());
  long long ans = 0;
  for (auto k: Alst){
    ans += upper_bound(Blst.begin(), Blst.end(), X-k) - lower_bound(Blst.begin(), Blst.end(), X-k);
  }
  cout << ans << endl;
}
