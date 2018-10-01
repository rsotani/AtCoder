#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<long long> a;
  for (int i=0; i<N; i++){
    long long x;
    cin >> x;
    if (x < K) a.push_back(x);
  }
  if (a.size() == 0) {
    cout << 0 << endl;
    return 0;
  }
  sort(a.begin(), a.end());
  long long check = a[a.size()-1];
  vector<long long> clst;
  for (int i=0; i<(int)a.size(); i++){
    check += a[i];
    clst.push_back(a[i]);
    if (check >= K) break;
  }
  if (check < K){
    cout << a.size() << endl;
    return 0;
  }
  int ans = 0;
  for (int i=0; i<(int)clst.size(); i++){
    check -= clst[i];
    if ((check >= K)) ans++;
    else break;
  }
  cout << ans << endl;
}
