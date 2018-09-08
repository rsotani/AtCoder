#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y){
  if (x<y) gcd(y,x);
  else if (y==0) return x;
  else gcd(y,x%y);
}

int main(){
  int N;
  cin >> N;
  vector<long long> x(N+1);
  for (int i=0; i<N+1; i++) cin >> x[i];
  sort(x.begin(), x.end());
  vector<long long> y(N);
  for (int i=0; i<N; i++){
    y[i] = x[i+1]-x[i];
  }
  long long ans=y[0];
  for (int i=1; i<N; i++){
    ans = gcd(y[i], ans);
  }
  cout << ans << endl;
}
