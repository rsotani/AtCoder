#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> B(N-1);
  for (int i=0; i<N-1; i++) cin >> B[i];
  unordered_map<int, set<int> > mp;
  unordered_map<int, int> salary;
  for (int i=0; i<N-1; i++){
    mp[B[i]].insert(i+2);
  }
  for (int i=N; i>0; i--){
    if (mp.find(i) == mp.end()){
      salary[i] = 1;
    }
    else {
      int mx = 0, mn = 1e9;
      for (auto j: mp[i]){
        mx = max(mx, salary[j]);
        mn = min(mn, salary[j]);
      }
      salary[i] = mx+mn+1;
    }
  }
  cout << salary[1] << endl;
}
