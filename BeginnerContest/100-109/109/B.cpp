#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> W(N);
  for (int i=0; i<N; i++){
    cin >> W[i];
  }
  set<string> S;
  char lastw = ' ';
  for(int i=0; i<N; i++){
    if(lastw != ' '){
      if (lastw != W[i][0]){
        cout << "No" << endl;
        return 0;
      }
    }
    if (S.find(W[i]) != S.end()){
      cout << "No" << endl;
      return 0;
    }
    S.insert(W[i]);
    lastw = W[i][W[i].size()-1];
  }
  cout << "Yes" << endl;
}
