#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  int f = 0;
  for (auto i: s){
    if ((i == 'i') && (f == 0)) f++;
    if ((i == 'c') && (f == 1)) f++;
    if ((i == 't') && (f == 2)){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}
