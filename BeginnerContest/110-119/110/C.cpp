#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  cin >> S >> T;
  map<char, int> Smp, Tmp;
  for (auto k: S) Smp[k]++;
  for (auto k: T) Tmp[k]++;
  vector<int> Scheck, Tcheck;
  for (auto k: Smp) Scheck.push_back(k.second);
  for (auto k: Tmp) Tcheck.push_back(k.second);
  sort(Scheck.begin(), Scheck.end());
  sort(Tcheck.begin(), Tcheck.end());
  // for (auto i: Scheck) cout << i << "";
  // cout << endl;
  // for (auto i: Tcheck) cout << i << "";
  // cout << endl;
  int i=0,j=0;
  bool flag =true;
  while((i<Scheck.size())&&flag){
    if (Scheck[i] != Tcheck[j]) flag=false;
    i++; j++;
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
