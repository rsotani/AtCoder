#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int slen = s.size();
  if (s[slen-1]=='1'){
    cout << '-1' << endl;
    return 0;
  }
  for (int i=0; i<slen-1; i++){
    if (s[i] != s[slen-2-i]){
      cout << '-1' << endl;
      return 0;
    }
  }
  for (int i=0; i<(slen-1)/2; i++){
    
  }
}
