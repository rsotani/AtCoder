#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  if (N*2>M || N*4<M) cout << "-1 -1 -1" << endl;
  else if (M<=3*N) cout << 3*N-M << ' ' << N-3*N+M << ' ' << 0 << endl;
  else cout << 0 << ' ' << 4*N-M << ' ' << N-4*N+M << endl;
}
