#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i=0; i<N; i++)
    cin >> d.at(i);
  sort(d.begin(),d.end());
  int ans = 1;
  int bef = d.at(0);
  for (int i=1; i<N; i++){
    if (bef < d.at(i)){
      ans += 1;
      bef = d.at(i);
    }
  }
  cout << ans << endl;
}
