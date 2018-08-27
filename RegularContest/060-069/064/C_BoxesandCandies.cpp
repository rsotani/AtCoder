#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  long long count = 0;
  long long score = a[0];
  if (score > x){
    count += score - x;
    a[0] = x;
    score = x;
  }
  for (int i=1; i<N; i++){
    score += a[i];
    if (score > x){
      count += score - x;
      a[i] = x - a[i-1];
      score = x;
    }
    score -= a[i-1];
  }
  cout << count << endl;
}
