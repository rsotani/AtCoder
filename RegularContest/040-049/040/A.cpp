#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int taka = 0;
  int ao = 0;
  for (int i=0; i<N; i++){
    string S;
    cin >> S;
    for (auto s: S){
      if (s == 'R') taka++;
      else if (s == 'B') ao++;
    }
  }
  if (taka>ao) cout << "TAKAHASHI" << endl;
  else if (ao>taka) cout << "AOKI" << endl;
  else cout << "DRAW" << endl;
}
