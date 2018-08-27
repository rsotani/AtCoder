#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int> > b(N, vector<int>(M));
  for (int i=0; i<N; i++){
    string s;
    cin >> s;
    for (int j=0; j<M; j++) b[i][j] = s[j]-'0';
  }
  vector<vector<int> > a(N, vector<int>(M,0));
  for (int i=0; i<N-2; i++){
    for (int j=0; j<M; j++){
      a[i+1][j] += b[i][j];
      b[i+1][j-1] -= b[i][j];
      b[i+1][j+1] -= b[i][j];
      b[i+2][j] -= b[i][j];
    }
  }
  for (int i=0; i<N; i++){
    for (int j=0; j<M; j++){
      cout << a[i][j];
    }
    cout << endl;
  }
}
