#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int w;
  cin >> w;
  string ans;
  for (int i=0; i<S.size(); i+=w){
    ans += S[i];
  }
  cout << ans << endl;
}
