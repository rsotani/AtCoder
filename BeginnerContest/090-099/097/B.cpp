#include <bits/stdc++.h>
using namespace std;

int main(){
  int X;
  cin >> X;
  set<int> hoge;
  hoge.insert(1);
  for (int i=2; i<=10; i++){
    for (int j=2; j<=50; j++){
      int tmp = pow(j,i);
      if (tmp>X) break;
      hoge.insert(tmp);
    }
  }
  int ans = 0;
  for (auto k: hoge){
    ans = max(k,ans);
  }
  cout << ans << endl;
}
