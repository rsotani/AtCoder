#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int lenS = S.size();
  int cal = 1;
  for (int i=0; i<lenS-1; i++) cal *= 2;
  long long ans = 0;
  for (int i=0; i<cal; i++){
    long long tmp = S[0] - '0';
    int check = i;
    for (int j=1; j<lenS; j++){
      if (check&1){
        ans += tmp;
        tmp = S[j] - '0';
      } else {
        tmp = tmp*10 + S[j] - '0';
      }
      check >>= 1;
    }
    ans += tmp;
  }
  cout << ans << endl;
}
