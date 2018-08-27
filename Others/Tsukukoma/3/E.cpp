#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  double mean = (n+1)/2.0;
  double ans = 0;
  double p = 1;
  for (int i=0; i<n; i++){
    ans += mean*p;
    p *= (n-1-i)/(double)n;
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
