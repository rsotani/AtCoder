#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, P;
  cin >> N >> P;
  if (N==1){
    cout << P << endl;
    return 0;
  }
  long long sqP = sqrt(P);
  map<long long, long long> mp;
  for (long long i=2; i<sqP; i++){
    if (P%i==0){
      while(P%i==0){
        mp[i]++;
        P/=i;
      }
    }
  }
  long long ans = 1;
  for (auto k: mp){
    for (int i=0; i<k.second/N; i++){
      ans *= k.first;
    }
  }
  cout << ans << endl;
}
