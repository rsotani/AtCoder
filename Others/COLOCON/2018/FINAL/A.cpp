#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N; cin >> N;
  string S; cin >> S;
  long long count = 0;
  long long ans1 = 0, ans2 = 0;
  bool flag = true;
  for (int i=0; i<S.size(); i++){
    if (S[i]=='A'){
      count++;
      ans1 += count;
    } else {
      count = 0;
      flag = false;
    }
  }
  for (int i=0; i<S.size(); i++){
    if (S[i]=='A'){
      count++;
      ans2 += count;
    } else {
      count = 0;
    }
  }
  if (flag){
    long long si = S.size();
    cout << (N*si)*(N*si+1)/2 << endl;
  } else {
    cout << ans1 + ans2*(N-1) << endl;
  }
}
