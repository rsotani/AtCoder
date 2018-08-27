#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i=0; i<N; i++) cin >> p[i];
  set<int> ans{0};
  for (int i=0; i<N; i++){
    set<int> yea(ans);
    for (int a: yea){
      ans.insert(p[i]+a);
    }
  }
  cout << ans.size() << endl;
}
