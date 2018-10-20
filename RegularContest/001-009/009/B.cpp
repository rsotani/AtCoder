#include <bits/stdc++.h>
using namespace std;

int main(){
  map<int, int> b;
  for (int i=0; i<=9; i++){
    int k;
    cin >> k;
    b[k] = i;
  }
  int N;
  cin >> N;
  vector<string> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  for (int i=0; i<N; i++){
    for (int j=1; j<N-i; j++){
      if (A[j-1].size()>A[j].size()) swap(A[j-1], A[j]);
      else if (A[j-1].size()<A[j].size()) continue;
      else{
        for (int k=0; k<A[j].size(); k++){
          if (b[A[j-1][k]-'0']>b[A[j][k]-'0']){
            swap(A[j-1],A[j]);
            break;
          } else if (b[A[j-1][k]-'0']<b[A[j][k]-'0']){
            break;
          }
        }
      }
    }
  }
  for (auto k: A){
    cout << k << endl;
  }
}
