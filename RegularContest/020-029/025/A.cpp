#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> D(7), J(7);
  for (int i=0; i<7; i++) cin >> D[i];
  for (int i=0; i<7; i++) cin >> J[i];
  int ans = 0;
  for (int i=0; i<7; i++) ans += max(D[i], J[i]);
  cout << ans << endl;
}
