#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  double ans=0;
  for (int i=0; i<N; i++){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    double score = a+b+c+d+e*110.0/900.0;
    ans = max(ans, score);
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
