#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  string S; cin >> S;
  int i=0;
  int ans = 0;
  while(i<N-1){
    if (S[i]!=S[i+1]){
      ans++;
      i++;
    }
    i++;
  }
  cout << ans << endl;
}
