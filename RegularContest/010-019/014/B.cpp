#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> W(N);
  for (int i=0; i<N; i++) cin >> W[i];
  char befword = ' ';
  set<string> words;
  string ans = "DRAW";
  for (int i=0; i<N; i++){
    if (i>0) {
      if (W[i][0] != befword){
        if (i%2==0) ans = "LOSE";
        else ans = "WIN";
        break;
      }
    }
    if (words.find(W[i]) != words.end()){
      if (i%2==0) ans = "LOSE";
      else ans = "WIN";
      break;
    }
    words.insert(W[i]);
    befword = W[i][W[i].size()-1];
  }
  cout << ans << endl;
}
