#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int slen = s.size();
  if (s[slen-1]=='1'||s[0]=='0'){
    cout << -1 << endl;
    return 0;
  }
  for (int i=0; i<slen-1; i++){
    if (s[i] != s[slen-2-i]){
      cout << -1 << endl;
      return 0;
    }
  }
  vector<int> lis;
  for (int i=0; i<slen-1; i++){
    if (s[i]=='1'){
      for (auto k: lis){
        cout << i+1 << ' ' << k << endl;
      }
      lis.clear();
      lis.push_back(i+1);
    }
    else lis.push_back(i+1);
  }
  cout << slen-1 << ' ' << slen << endl;
}
