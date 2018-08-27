#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i=0; i<N; i++) cin >> S[i];
  long long ans=0;
  for (int i=0; i<N; i++){
    bool flag = true;
    for (int j=0; j<N; j++){
      for (int k=0; k<N; k++){
        if (S[(j+i)%N][k] != S [(k+i)%N][j]){
          flag = false;
          break;
        }
      }
    if (!flag) break;
    if (j==N-1) ans += N;
    }
  }
  cout << ans << endl;
}
