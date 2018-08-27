#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  vector<int> check(N+1);
  for (int i:A) check[i]++;
  if (N%2 == 0){
    for (int i=1; i<N; i+=2){
      if (check[i] != 2){
        cout << 0 << endl;
        return 0;
      }
    }
  }else{
    for (int i=0; i<N; i+=2){
      if ((i == 0) && (check[i] != 1)){
        cout << 0 << endl;
        return 0;
      }
      else if ((i != 0) && (check[i] != 2)){
        cout << 0 << endl;
        return 0;
      }
    }
  }
  long long ans = 1;
  for (int i=0; i<N/2; i++){
    ans *= 2;
    ans = ans % (1000000000+7);
  }
  cout << ans << endl;
}
