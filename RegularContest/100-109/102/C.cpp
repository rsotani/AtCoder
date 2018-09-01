#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, K;
  cin >> N >> K;
  long long ans = 0;
  if (K%2 == 1){
    ans = (N/K)*(N/K)*(N/K);
  }
  else {
    ans = (N/K)*(N/K)*(N/K);
    ans += ((N+K/2)/K)*((N+K/2)/K)*((N+K/2)/K);
  }
  cout << ans << endl;
}
