#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  map<int, map<int, int> > mp;
  for (int i=0; i<M; i++){
    int A, B, L;
    cin >> A >> B >> L;
    mp[A][L]++;
    mp[B][L]++;
  }
  int ans = 0;
  for (int i=1; i<=N; i++){
    for (auto k: mp[i]){
      if (k.first>1270) break;
      if (k.first<1270){
        ans += k.second*mp[i][2540-k.first];
      } else {
        ans += k.second*(k.second-1)/2;
      }
    }
  }
  cout << ans << endl;
}
