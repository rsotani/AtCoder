#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int ans = 0;
  bool valuenot0 = true;
  for (auto i: S){
    if (i == '+'){
      if (valuenot0) ans++;
      valuenot0 = true;
    }
    else if (i == '0') valuenot0 = false;
    else if (i == '*') continue;
    else if (i-'0' > 0) continue;
  }
  if (valuenot0) ans++;
  cout << ans << endl;
}
