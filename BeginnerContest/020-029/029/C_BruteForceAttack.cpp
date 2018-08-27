#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int cnt = pow(3,N);
  string pas = "abc";
  for (int i=0; i<cnt; i++){
    int check = i;
    string ans;
    for (int j=0; j<N; j++){
      int t = check%3;
      ans += pas[t];
      check /= 3;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }
}
