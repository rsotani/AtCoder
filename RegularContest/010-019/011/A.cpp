#include <bits/stdc++.h>
using namespace std;

int main(){
  int m, n, N;
  cin >> m >> n >> N;
  int ans = 0;
  int pen = N;
  int re = 0;
  while(true){
    int befans = ans;
    ans += pen;
    re += pen;
    pen = (re/m)*n;
    re = re%m;
    if (ans == befans) break;
  }
  cout << ans << endl;
}
