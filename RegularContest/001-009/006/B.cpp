#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, L;
  cin >> N >> L;
  vector<string> amida(L+2);
  for (int i=0; i<L+2; i++){
    getline(cin, amida[i]);
  }
  // for (auto i: amida) cout << i << endl;
  int ans;
  for (int i=0; i<2*N-1; i++){
    if (amida[L+1][i] == 'o') ans = i;
  }
  for (int i=L; i>0; i--){
    if ((ans > 0) && (amida[i][ans-1] == '-')) ans -= 2;
    else if ((ans < 2*N-2) && (amida[i][ans+1] == '-')) ans += 2;
  }
  cout << ans/2+1 << endl;
}
