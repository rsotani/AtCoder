#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  if (K==1){
    cout << N << endl;
    return 0;
  }
  int count = 1;
  int lastA = A[0];
  int ans = 0;
  for (int i=1; i<N; i++){
    if (A[i] > lastA){
      count++;
      if (count >= K){
        ans++;
      }
    }
    else count = 1;
    lastA = A[i];
  }
  cout << ans << endl;
}
