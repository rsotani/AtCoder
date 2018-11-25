#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> x(N);
  for (int i=0; i<N; i++){
    cin >> x[i];
  }
  sort(x.begin(), x.end());
  vector<long long> y(N-1);
  for (int i=0; i<N-1; i++){
    y[i] = x[i+1] - x[i];
  }
  long long ans = 0;
  for (int i=0; i<N-1; i++){
    ans += y[i]*(i+1)*(N-1-i);
  }
  cout << ans << endl;
}
