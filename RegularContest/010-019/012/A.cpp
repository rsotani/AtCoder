#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int ans = 0;
  if (s == "Monday") ans = 5;
  else if (s == "Tuesday") ans = 4;
  else if (s == "Wednesday") ans = 3;
  else if (s == "Thursday") ans = 2;
  else if (s == "Friday") ans = 1;
  cout << ans << endl;
}
