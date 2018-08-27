#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int lens = s.size();
  if (lens == 2){
    if (s[0] == s[1]){
      cout << 1 << ' ' << 2 << endl;
      return 0;
    }
  }
  for (int i=0; i<lens-2; i++){
    string subs = s.substr(i,3);
    set<char> st;
    for (int j=0; j<3; j++) st.insert(subs[j]);
    if ((int)st.size() < 3){
      cout << i+1 << ' ' << i+3 << endl;
      return 0;
    }
  }
  cout << -1 << ' ' << -1 << endl;
}
