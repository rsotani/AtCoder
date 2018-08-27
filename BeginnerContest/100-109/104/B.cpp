#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  if (s[0] != 'A') {
    cout << "WA" << endl;
    return 0;
  }
  int slen = s.size();
  int count = 0;
  for(int i=1; i<slen; i++){
    if (('A' <= s[i]) && (s[i] <= 'Z')){
      if ((s[i] != 'C') || (i<2) || (i == slen-1)){
        cout << "WA" << endl;
        return 0;
      }
      count++;
    }
  }
  if (count == 1) cout << "AC" << endl;
  else cout << "WA" << endl;
}
