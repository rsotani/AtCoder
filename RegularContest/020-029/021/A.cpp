#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int> > A(4, vector<int>(4));
  for (int i=0; i<4; i++){
    for (int j=0; j<4; j++) cin >> A[i][j];
  }
  for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
      if ((i<3) && (j<3)){
        if ((A[i][j]==A[i+1][j]) || (A[i][j]==A[i][j+1])){
          cout << "CONTINUE" << endl;
          return 0;
        }
      } else if (i<3){
        if (A[i][j]==A[i+1][j]){
          cout << "CONTINUE" << endl;
          return 0;
        }
      } else {
        if (A[i][j]==A[i][j+1]){
          cout << "CONTINUE" << endl;
          return 0;
        }
      }
    }
  }
  cout << "GAMEOVER" << endl;
}
