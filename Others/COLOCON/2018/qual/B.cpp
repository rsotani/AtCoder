#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  string S; cin >> S;
  int ans = 0;
  for (int i=0; i<N; i++){
    int T; cin >> T;
    if (S[i]=='0') ans += T;
    else ans += min(T, X);
  }
  cout << ans << endl;
}
