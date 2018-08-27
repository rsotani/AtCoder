#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, K;
  cin >> N >> K;
  map<int, long long> mp;
  for (int i=0; i<N; i++){
    int a,b;
    cin >> a >> b;
    mp[a] += b;
  }
  long long check = 0;
  for (auto itr = mp.begin(); itr != mp.end(); itr++){
    check += itr->second;
    if (check >= K){
      cout << itr->first << endl;
      return 0;
    }
  }
}
