#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  string Nst = to_string(N);
  long long k = 1;
  long long ans = 0;
  for (int i=Nst.size()-1; i>-1; i--){
    k*=10;
    if (Nst[i]=='0') ans += (k/10)*(N/k);
    else if (Nst[i]=='1') ans += (k/10)*(N/k) + N%(k/10)+1;
    else ans += (k/10)*(N/k+1);
    // cout << ans << endl;
  }
  cout << ans << endl;
}
