#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, A, B;
  cin >> N >> M >> A >> B;
  vector<int> c(M);
  for (int i=0; i<M; i++) cin >> c[i];
  for (int i=0; i<M; i++){
    if (N <= A) N += B;
    N -= c[i];
    if (N < 0){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << "complete" << endl;
}
