#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, K;
  cin >> H >> W >> K;
  long long md=1e9+7;
  vector<long long> fib(9, 1);
  for (int i=2; i<9; i++) fib[i] = fib[i-1] + fib[i-2];
  vector<long long> ans(W+2,0);
  ans[1] = 1;
  for (int i=1; i<=H; i++){
    vector<long long> nxt(W+2,0);
    for (int j=1; j<=W; j++){
      if (j>1) {
        nxt[j] += ans[j-1]*fib[j-2]*fib[W-j];
        nxt[j] %= md;
      }
      nxt[j] += ans[j]*fib[j-1]*fib[W-j];
      nxt[j] %= md;
      if (j<W){
        nxt[j] += ans[j+1]*fib[j-1]*fib[W-j-1];
        nxt[j] %= md;
      }
    }
    ans = nxt;
  }
  cout << ans[K] << endl;
}
