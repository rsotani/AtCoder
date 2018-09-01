#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;
  int score = 1;
  int now = 1;
  set<int> st;
  while (now != 0){
    if (st.find(now%K) == st.end()){
      st.insert(now%K);
      now *= 10;
      continue;
    }
    now = 2;
    now %= K;
    score++;
  }
  cout << score << endl;
}
