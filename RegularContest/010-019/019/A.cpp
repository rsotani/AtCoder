#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string ans;
  for (auto c: s){
    if ((c == 'O') || (c == 'D')) ans += '0';
    else if (c == 'I') ans += '1';
    else if (c == 'Z') ans += '2';
    else if (c == 'S') ans += '5';
    else if (c == 'B') ans += '8';
    else ans += c;
  }
  cout << ans << endl;
}
