#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int ans = 1000;
  for (int i=0; i<S.size()-2; i++){
    ans = min(ans, abs(753-stoi(S.substr(i,3))));
  }
  cout << ans << endl;
}
