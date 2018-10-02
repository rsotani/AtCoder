#include <bits/stdc++.h>
using namespace std;

int main(){
  int Na, Nb;
  cin >> Na >> Nb;
  map<int, int> mp;
  for (int i=0; i<Na; i++){
    int A;
    cin >> A;
    mp[A]++;
  }
  for (int i=0; i<Nb; i++){
    int B;
    cin >> B;
    mp[B]++;
  }
  int wa=0, seki=0;
  for (auto x: mp){
    if (x.second>1) seki++;
    wa++;
  }
  cout << fixed << setprecision(10);
  cout << seki/(double)wa << endl;
}
