#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<vector<int> > T(N, vector<int>(K));
  for (int i=0; i<N; i++){
    for (int j=0; j<K; j++){
      cin >> T[i][j];
    }
  }
  int hoge=1;
  for (int i=0; i<N; i++) hoge*=K;
  for (int i=0; i<hoge; i++){
    int check = i;
    int ans = 0;
    for (int j=0; j<N; j++){
      ans = ans^T[j][check%K];
      check /= K;
    }
    if (ans == 0){
      cout << "Found" << endl;
      return 0;
    }
  }
  cout << "Nothing" << endl;
}
