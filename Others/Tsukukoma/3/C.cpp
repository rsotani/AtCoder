#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  long long P;
  cin >> N >> P;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  long long score = A[0];
  int f=1;
  int b=0;
  if (score == P){
    cout << "Yay!" << endl;
    return 0;
  }
  while (f<N){
    if ((score < P) || (b == f)){
      score *= A[f];
      f++;
    } else if (score > P){
      score /= A[b];
      b++;
    } else {
      cout << "Yay!" << endl;
      return 0;
    }
  }
  while (score >= P){
    if (score == P){
      cout << "Yay!" << endl;
      return 0;
    }
    score /= A[b];
    b++;
  }
  cout << ":(" << endl;
}
