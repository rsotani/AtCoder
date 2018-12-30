#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  map<int, int> mp;
  vector<int> hoge(2020);
  for (int i=1; i<=N; i++){
    int x;
    cin >> x;
    mp[i] = x;
    hoge[x] += i;
  }
  int M; cin >> M;
  for (int i=0; i<M; i++){
    int A;
    cin >> A;
    if (mp[A]<2019&&hoge[mp[A]+1] == 0){
      swap(hoge[mp[A]+1], hoge[mp[A]]);
      mp[A]++;
    }
  }
  for (auto k: mp){
    cout << k.second << endl;
  }
}
