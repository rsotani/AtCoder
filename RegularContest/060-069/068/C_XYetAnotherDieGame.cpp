#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x;
  cin >> x;
  long long ans = 0;
  ans += x/11;
  ans *= 2;
  if (x % 11 > 6)
    ans += 2;
  else if (x % 11 > 0)
    ans += 1;
  cout << ans << endl;
}
