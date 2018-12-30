#include <bits/stdc++.h>
using namespace std;

int main(){
  long long C, D;
  cin >> C >> D;
  long long checkl = 140;
  long long checkr = 170;
  long long ans = 0;
  while (checkl < D){
    ans += max(min(checkr,D)-max(checkl,C),(long long)0);
    checkr*=2; checkl*=2;
  }
  cout << ans << endl;
}
