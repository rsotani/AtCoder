#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long md = 1e9+7;
  long long ans = 0;
  vector<long long> hoge(N+1,1);
  for (long long i=0; i<=N; i++){
    for (int j=0; j<10; j++){
      hoge[i] *= i;
      hoge[i] %= md;
    }
  }
  for (int i=1; i<=N; i++){
    ans += (hoge[i]*hoge[N/i])%md;
    ans += md;
    ans -= (hoge[i-1]*hoge[N/i])%md;
    ans %= md;
  }
  cout << ans << endl;
}
