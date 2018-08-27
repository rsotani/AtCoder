#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int ans = 0;
  for (int i; i<3; i++){
    if (S.at(i) == '1')
      ans++;
  }
  cout << ans << endl;
}
