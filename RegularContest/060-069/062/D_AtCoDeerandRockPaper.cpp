#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int pcount = 0;
  int gcount = 0;
  for (int i=0; i<s.size(); i++){
    if (s[i] == 'p') pcount++;
    else gcount++;
  }
  cout << s.size()/2 - pcount << endl;
}
