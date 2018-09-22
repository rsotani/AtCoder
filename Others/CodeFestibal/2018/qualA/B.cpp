#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M, A, B;
  cin >> N >> M >> A >> B;
  vector<int> mikan(N,0);
  for (int i=0; i<M; i++){
    int L, R;
    cin >> L >> R;
    for (int i=L-1; i<R; i++){
      mikan[i] = B;
    }
  }
  int ans = 0;
  for (int i=0; i<N; i++){
    if (mikan[i]==0) ans += max(A,B);
    else ans += A;
  }
  cout << ans << endl;
}
