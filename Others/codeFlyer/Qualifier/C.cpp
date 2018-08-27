#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;
  vector<long long> X(N);
  for (int i=0; i<N; i++) cin >> X[i];
  int i = 0;
  int j = 1;
  int k = 2;
  int ans = 0;
  while(k < N){
    if (k == j){
      j--;
      k++;
    }
    else if (i == j){
      i--;
      j++;
    }
    else if (X[k] - X[i] <= D) k++;
    else if (X[k] - X[j] > D) j++;
    else if (X[j] - X[i] > D) i++;
    else{
      ans++;
      cout << i+1 << j+1 << k+1 << endl;
      if ((X[k]-X[i+1] > D) && (X[k] - X[j] <= D) && (X[j] - X[i+1] <= D)) ans++;
      j++;
    }
  }
  cout << ans << endl;
}
