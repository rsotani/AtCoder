#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<long long> x(N);
  for(int i=0; i<N; i++) cin >> x[i];
  long long ans = 1e18;
  for (int i=0; i<N-K+1; i++){
    long long tmp;
    if(x[i]*x[i+K-1]<0) tmp = min(abs(x[i]),abs(x[i+K-1]))*2+max(abs(x[i]),abs(x[i+K-1]));
    else tmp = max(abs(x[i]), abs(x[i+K-1]));
    ans = min(tmp, ans);
  }
  cout << ans << endl;
}
