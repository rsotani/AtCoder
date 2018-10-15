#include <bits/stdc++.h>
using namespace std;

int main(){
  int R, C, K;
  cin >> R >> C >> K;
  vector<string> S(R);
  for (int i=0; i<R; i++) cin >> S[i];
  int count = 0;
  vector<vector<int>> hoge(R, vector<int>(C,0));
  for (int x=0; x<C; x++){
    if (S[0][x]=='o') hoge[0][x] = 1;
    for (int y=1; y<R; y++){
      if (S[y][x]=='x') continue;
      hoge[y][x] = hoge[y-1][x] + 1;
    }
    if (S[R-1][x]=='o') hoge[R-1][x] = 1;
    for (int y=R-2; y>-1; y--){
      if (S[y][x]=='x') continue;
      hoge[y][x] = min(hoge[y][x], hoge[y+1][x] + 1);
    }
  }
  // for (int y=0; y<R; y++){
  //   for (int x=0; x<C; x++){
  //     cout << hoge[y][x];
  //   }
  //   cout << endl;
  // }
  for (int y=K-1; y<R-K+1; y++){
    for (int x=K-1; x<C-K+1; x++){
      bool flag = true;
      for (int i=-K+1; i<K; i++){
        if (K-abs(i)>hoge[y][x+i]){
          flag = false;
          break;
        }
      }
      if (flag) count++;
    }
  }
  cout << count << endl;
}
