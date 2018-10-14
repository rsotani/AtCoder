#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  long long ans = 0;
  int maxb = 0;
  for (int i=0; i<N; i++){
    int a, b;
    cin >> a >> b;
    ans += a*b;
    maxb = max(b,maxb);
  }
  ans += X*maxb;
  cout << ans << endl;
}
