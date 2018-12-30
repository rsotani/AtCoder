#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  for (int i=0; i<N; i++){
    set<char> X, Y;
    for(int j=0; j<N; j++){
      if(j<i) X.insert(S[j]);
      else Y.insert(S[j]);
    }
    int tmp=0;
    for(auto x: X){
      if(Y.find(x)!=Y.end()) tmp++;
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}
