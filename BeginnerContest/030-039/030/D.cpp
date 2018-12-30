#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, a; cin >> N >> a;
  a--;
  string k;
  cin >> k;
  vector<int> b(N);
  for (int i=0; i<N; i++){
    cin >> b[i];
    b[i]--;
  }
  if (k.size() <=6){
    int K = stoi(k);
    int asw=a;
    for (int i=0; i<K; i++){
      asw = b[asw];
    }
    cout << asw+1 << endl;
    return 0;
  }
  vector<int> ans;
  ans.push_back(a);
  set<int> checked;
  checked.insert(a);
  int check = a;
  while (true){
    check = b[check];
    if (checked.find(check)!=checked.end()) break;
    ans.push_back(check);
    checked.insert(check);
  }
  int target;
  for (int i=0;; i++){
    if (ans[i] == check){
      target = i;
      break;
    }
  }
  long long loopsize = ans.size()-target;
  long long point = 0;
  for (int i=0; i<k.size(); i++){
    point = (point*10 + (long long)(k[i]-'0'))%loopsize;
  }
  point -= target;
  while(point < 0) point += loopsize;
  point %= loopsize;
  cout << ans[target+point]+1 << endl;
}
