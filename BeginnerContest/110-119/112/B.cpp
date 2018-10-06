#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T;
  cin >> N >> T;
  int ans = 0;
  int cost = 1e9;
  for (int i=1; i<=N; i++){
    int c, t;
    cin >> c >> t;
    if (t<=T&&c<cost){
      ans = i;
      cost = c;
    }
  }
  if (ans==0) cout << "TLE" << endl;
  else cout << cost << endl;
}
