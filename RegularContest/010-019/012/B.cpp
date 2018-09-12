#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, va, vb;
  double L;
  cin >> N >> va >> vb >> L;
  double ans;
  for (int i=0; i<N; i++){
    ans = (L/va)*vb;
    L = ans;
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
