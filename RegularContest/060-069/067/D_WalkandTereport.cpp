#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, A, B;
  cin >> N >> A >> B;
  vector<int> X(N);
  long long ans = 0;
  for (int i=0; i<N; i++) cin >> X[i];
  for (int i=0; i<N-1; i++){
    ans += min(A*(X[i+1]-X[i]), B);
  }
  cout << ans << endl;
}
