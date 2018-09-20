#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  map<int, int> mp;
  for (int i=1; i<N+1; i++) mp[i] = i;
  int indisk = 0;
  for (int i=0; i<M; i++){
    int lis;
    cin >> lis;
    int tmp;
    tmp = indisk;
    indisk = lis;
    for (int j=1; j<N+1; j++){
      if (mp[j] == lis){
        mp[j] = tmp;
        break;
      }
    }
  }
  for (auto i: mp){
    if (i.first == 0) continue;
    cout << i.second << endl;
  }
}
