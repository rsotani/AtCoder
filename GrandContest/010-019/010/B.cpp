#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  vector<long long> A(N);
  long long k=0;
  for (int i=0; i<N; i++){
    cin >> A[i];
    k+=A[i];
  }
  if (k%(N*(N+1)/2) != 0){
    cout << "NO" << endl;
    return 0;
  }
  k/=N*(N+1)/2;
  vector<long long> B(N);
  for (int i=0; i<N; i++){
    B[i] = A[(i+1)%N] - A[i];
    B[i] -= k;
  }
  for (int i=0; i<N; i++){
    if (B[i] > 0){
      cout << "NO" << endl;
      return 0;
    }
    if ((-B[i])%N != 0){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
