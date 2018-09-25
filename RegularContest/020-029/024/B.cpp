#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> C(N);
  for (int i=0; i<N; i++) cin >> C[i];
  int bef = C[0];
  int ans = 1;
  int nowlen = 1;
  for (int i=1; i<2*N; i++){
    int check = C[i%N];
    if (bef==check){
      nowlen++;
    }
    else{
      ans = max(nowlen, ans);
      bef = check;
      nowlen = 1;
    }
  }
  ans = max(nowlen, ans);
  if (ans > N) cout << -1 << endl;
  else cout << (ans+1)/2 << endl;
}
