#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int slen = s.size();
  for (int i=0; i<slen; i++){
    if ((s[i] != s[slen-1-i]) && (s[i] != '*') && (s[slen-1-i] != '*')){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
