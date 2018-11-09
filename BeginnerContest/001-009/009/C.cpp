#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  map<char, int> mp;
  map<char, int> ansmp;
  set<char> st;
  string ans = "";
  for (auto s: S){
    mp[s]++;
    ansmp[s]++;
    st.insert(s);
  }
  for (int i=0; i<N; i++){
    mp[S[i]]--;
    for(auto check: st){
      if (ansmp[check]==0) continue;
      if (check==S[i]){
        ans += check;
        ansmp[check]--;
        break;
      } else {
        ansmp[check]--;
        int tmp = N-i-1;
        for (auto k: st){
          tmp -= min(mp[k],ansmp[k]);
        }
        if (tmp > K-1){
          ansmp[check]++;
          continue;
        } else {
          ans += check;
          K--;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}
