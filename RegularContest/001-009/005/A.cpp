#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> w(N);
  for (int i=0; i<N; i++) cin >> w[i];
  int ans = 0;
  for (int i=0; i<N; i++){
    if ((w[i] == "TAKAHASHIKUN") || (w[i] == "Takahashikun") || (w[i] == "takahashikun")) ans++;
    if ((w[i] == "TAKAHASHIKUN.") || (w[i] == "Takahashikun.") || (w[i] == "takahashikun.")) ans++;
  }
  cout << ans << endl;
}
