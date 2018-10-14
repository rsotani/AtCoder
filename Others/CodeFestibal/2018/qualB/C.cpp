#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<char> > ans(N+2,vector<char>(N+2,'.'));
  int count = 0;
  for (int i=1; i<=N; i++){
    for (int j=1; j<=N; j++){
      if (i%5==1&&j%5==0) {
        ans[i][j] = 'X';
        ans[i-1][j] = '&';
        ans[i][j-1] = '&';
        ans[i][j+1] = '&';
        ans[i+1][j] = '&';
        count++;
      }
      if (i%5==2&&j%5==2) {
        ans[i][j] = 'X';
        ans[i-1][j] = '&';
        ans[i][j-1] = '&';
        ans[i][j+1] = '&';
        ans[i+1][j] = '&';
        count++;
      }
      if (i%5==3&&j%5==4) {
        ans[i][j] = 'X';
        ans[i-1][j] = '&';
        ans[i][j-1] = '&';
        ans[i][j+1] = '&';
        ans[i+1][j] = '&';
        count++;
      }
      if (i%5==4&&j%5==1) {
        ans[i][j] = 'X';
        ans[i-1][j] = '&';
        ans[i][j-1] = '&';
        ans[i][j+1] = '&';
        ans[i+1][j] = '&';
        count++;
      }
      if (i%5==0&&j%5==3) {
        ans[i][j] = 'X';
        ans[i-1][j] = '&';
        ans[i][j-1] = '&';
        ans[i][j+1] = '&';
        ans[i+1][j] = '&';
        count++;
      }
    }
  }
  for (int i=1; i<=N; i++){
    for (int j=1; j<=N; j++){
      if (ans[i][j] == '.'){
        count++;
        ans[i][j] = 'X';
      }
    }
  }
  for (int i=1; i<=N; i++){
    for (int j=1; j<=N; j++){
      if (ans[i][j] == 'X'){
        cout << 'X' ;
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }
  // cout <<count << endl;
}
