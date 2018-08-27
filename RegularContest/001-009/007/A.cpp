#include <bits/stdc++.h>
using namespace std;

int main(){
  char X;
  cin >> X;
  string s;
  cin >> s;
  string ans = "";
  for (int i=0; i<s.size(); i++){
    if (s[i]==X) continue;
    ans += s[i];
  }
  cout << ans << endl;
}
