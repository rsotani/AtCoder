#include <bits/stdc++.h>
using namespace std;

int main(){
  int T, N;
  cin >> T >> N;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  int M;
  cin >> M;
  vector<int> B(M);
  for (int i=0; i<M; i++) cin >> B[i];
  int a=0, b=0;
  while(a<N&&b<M){
    if (A[a]>B[b]){
      cout << "no" << endl;
      return 0;
    }
    if (A[a]+T<B[b]){
      while(A[a]+T<B[b]&&a<N){
        a++;
      }
    }
    if (a<N&&A[a]+T>=B[b]){
      a++; b++;
    }
  }
  if (a==N&&b<M) cout << "no" << endl;
  else cout << "yes" << endl;
}
