#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> a(N), b(N);
  for (int i=0; i<N; i++){
    cin >> a[i];
  }
  for (int i=0; i<N; i++){
    cin >> b[i];
  }
  vector<int> count(N+1,0);
  set<int> hoge;
  int ans = 0;
  for (int i=0; i<N; i++){
    ans += max(a[i], b[i]);
    hoge.insert(max(a[i], b[i]));
    count[max(a[i], b[i])]++;
  }
  vector<pair<int, int>> check(N);
  for (int i=0; i<N; i++){
    check[i].first = i;
    check[i].second = abs(a[i]-b[i]);
  }
  sort(check.begin(), check.end(), [](const auto& a, const auto& b){return a.second < b.second;});
  int i=0;
  while(hoge.size()<K){
    int num = check[i].first;
    if (hoge.find(min(a[num], b[num]))==hoge.end()&&count[max(a[num], b[num])]==2){
      hoge.insert(min(a[num], b[num]));
      ans -= check[i].second;
      count[max(a[num], b[num])]--;
    }
    i++;
    i%=N;
  }
  cout << ans << endl;
}
