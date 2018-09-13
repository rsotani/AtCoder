#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> x(N);
  for (int i=0; i<N; i++) cin >> x[i];
  int count = 0;
  for (int i=0; i<N; i++){
    for (int j=0; j<9; j++){
      if (x[i][j] == 'x') count ++;
      if (x[i][j] == 'o'){
        if ((i>0) && (x[i-1][j] == 'o')) continue;
        count++;
      }
    }
  }
  cout << count << endl;
}
