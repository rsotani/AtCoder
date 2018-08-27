#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int lenS = S.size();
  int ans = lenS/2;
  char seg;
  while(true){
    if ((ans == lenS/2) && (lenS%2==1)){
      ans++;
      seg = S[lenS/2];
    } else if ((ans == lenS/2) && (lenS%2==0)){
      seg = S[lenS/2];
      if (seg != S[lenS/2-1]) break;
      ans++;
    } else if ((S[ans] == seg) && (S[lenS-1-ans] == seg)) ans++;
      else break;
    if (ans == lenS) break;
  }
  cout << ans << endl;
}
