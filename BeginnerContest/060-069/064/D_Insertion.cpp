#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int R = 0;
  int L = 0;
  for (int i=0; i<N; i++){
    if (S[i]=='('){
      L++;
    } else {
      if (L>0){
        L--;
      }
      else {
        R++;
      }
    }
  }
  string ans = "";
  for (int i=0; i<R; i++) ans += '(';
  ans += S;
  for (int i=0; i<L; i++) ans += ')';
  cout << ans << endl;
}
