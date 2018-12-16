#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  long long ans = 0;
  long long Slen = S.size();
  long long Bpos = Slen-1;
  for (int i=Slen-1; i>=0; i--){
    if (S[i] == 'B'){
      ans += Bpos-i;
      Bpos--;
    }
  }
  cout << ans << endl;
}
