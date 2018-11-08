#include <bits/stdc++.h>
using namespace std;

int main(){
  int L;
  cin >> L;
  vector<long long> ans(L,0);
  ans[0] = 0;
  for (int i=0; i<L-1; i++){
    long long B;
    cin >> B;
    long long check = ans[i];
    long long hoge = 1;
    while(B||check){
      if ((B&1)^(check&1)){
        ans[i+1] += hoge;
      }
      hoge*=2;
      check >>= 1;
      B >>= 1;
    }
  }
  int check;
  cin >> check;
  if (ans[0]^ans[L-1]==check){
    for (int i=0; i<L; i++){
      cout << ans[i] << endl;
    }
  } else {
    cout << -1 << endl;
  }
}
