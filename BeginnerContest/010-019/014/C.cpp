#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> color(1000002,0);
  for (int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    color[a]++;
    color[b+1]--;
  }
  int ans = color[0];
  for (int i=1; i<1000002; i++){
    color[i] += color[i-1];
    ans = max(ans, color[i]);
  }
  cout << ans << endl;
}
