#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n, m, d;
  cin >> n >> m >> d;
  cout << fixed << setprecision(10);
  if (n<=d) {cout << 0 << endl; return 0;}
  if (d == 0) cout << (m-1)/(double)n << endl;
  else cout << (m-1)*2*(n-d)/(double)(n*n) << endl;;
}
