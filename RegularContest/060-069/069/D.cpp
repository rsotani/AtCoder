#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string s;
  cin >> s;
  vector<string> check = {"SS", "SW", "WS", "WW"};
  string ans;
  for (string lst : check){
    ans = lst;
    for (int i=2; i<N; i++){
      if (ans[i-1] == 'S'){
        if (s[i-1] == 'o'){
          if (ans[i-2] == 'S') ans += 'S';
          else ans += 'W';
        }
        else {
          if (ans[i-2] == 'S') ans += 'W';
          else ans += 'S';
        }
      }
      else {
        if (s[i-1] == 'o'){
          if (ans[i-2] == 'S') ans += 'W';
          else ans += 'S';
        }
        else {
          if (ans[i-2] == 'S') ans += 'S';
          else ans += 'W';
        }
      }
    }
    bool flag1 = false, flag2 = false;
    if (ans[N-1] == 'S'){
      if (s[N-1] == 'o'){
        if (ans[0] == ans[N-2]) flag1 = true;
      }
      else {
        if (ans[0] != ans[N-2]) flag1 = true;
      }
    }
    else {
      if (s[N-1] == 'o'){
        if (ans[0] != ans[N-2]) flag1 = true;
      }
      else {
        if (ans[0] == ans[N-2]) flag1 = true;
      }
    }
    if (ans[0] == 'S'){
      if (s[0] == 'o'){
        if (ans[1] == ans[N-1]) flag2 = true;
      }
      else {
        if (ans[1] != ans[N-1]) flag2 = true;
      }
    }
    else {
      if (s[0] == 'o'){
        if (ans[1] != ans[N-1]) flag2 = true;
      }
      else {
        if (ans[1] == ans[N-1]) flag2 = true;
      }
    }
    if (flag1 && flag2){
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
