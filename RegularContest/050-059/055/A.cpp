#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string ans = "1";
  for (int i=0; i<N-1; i++) ans += '0';
  ans += '7';
  cout << ans << endl;
}
