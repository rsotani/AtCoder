#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  string m = "MUJIN";
  cin >> s;
  if (s.size() < 5) {cout << "No" << endl; return 0;}
  for (int i=0; i<5; i++){
    if (s[i] != m[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
