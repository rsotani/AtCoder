#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int X, Y;
  cin >> X >> Y;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  vector<int> b(M);
  for (int i=0; i<M; i++) cin >> b[i];
  int now = 0;
  int i=0; int j=0;
  int rideA = a[0];
  int rideB = b[0];
  int ans = 0;
  bool f = false;
  while((i<N) && (j<M)){
    while (rideA<now){
      i++;
      if (i==N) {f=true; break;}
      rideA = a[i];
    }
    if (f) break;
    now = rideA + X;
    while (rideB<now){
      j++;
      if (j==M) {f=true; break;}
      rideB = b[j];
    }
    if (f) break;
    now = rideB + Y;
    ans++;
  }
  cout << ans << endl;
}
