#include <bits/stdc++.h>
using namespace std;

long long func(long long n){
  long long x=0;
  while(n){
    x += n%10;
    n /= 10;
  }
  return x;
}

int main(){
  long long N;
  cin >> N;
  long long count = 0;
  long long check = N;
  vector<long long> ans;
  for (long long i=N-200; i<N; i++){
    if (i<0) continue;
    if (func(i)+i==N) ans.push_back(i);
  }
  cout << ans.size() << endl;
  for (long long k: ans){
    cout << k << endl;
  }
}
