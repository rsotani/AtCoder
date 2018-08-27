#include <bits/stdc++.h>
using namespace std;

int main(){
  int L, R;
  cin >> L >> R;
  vector<int> l(L), r(R);
  for (int i=0; i<L; i++) cin >> l[i];
  for (int i=0; i<R; i++) cin >> r[i];
  sort(l.begin(), l.end());
  sort(r.begin(), r.end());
  //for (auto i: r) cout << i << endl;
  int i=0, j=0, ans=0;
  while((i<L) && (j<R)){
    if (l[i] < r[j]) i++;
    else if (l[i] > r[j]) j++;
    else {ans++; i++; j++;}
  }
  cout << ans << endl;
}
