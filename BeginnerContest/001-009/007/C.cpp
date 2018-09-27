#include <bits/stdc++.h>
using namespace std;

int main(){
  int R, C, sy, sx, gy, gx;
  cin >> R >> C >> sy >> sx >> gy >> gx;
  vector<vector<char> > c(R, vector<char>(C));
  for (int i=0; i<R; i++){
    string st;
    cin >> st;
    for (int j=0; j<C; j++){
      c[i][j] = st[j];
    }
  }
  queue<vector<int> > Q;
  vector<int> start = {sy-1, sx-1, 0};
  Q.push(start);
  while(true){
    vector<int> check = Q.front();
    Q.pop();
    if ((check[0]==gy-1)&&(check[1]==gx-1)){
      cout << check[2] << endl;
      return 0;
    }
    if (c[check[0]+1][check[1]]=='.'){
      Q.push({check[0]+1,check[1],check[2]+1});
      c[check[0]+1][check[1]]='h';
    }
    if (c[check[0]-1][check[1]]=='.'){
      Q.push({check[0]-1,check[1],check[2]+1});
      c[check[0]-1][check[1]]='h';
    }
    if (c[check[0]][check[1]+1]=='.'){
      Q.push({check[0],check[1]+1,check[2]+1});
      c[check[0]][check[1]+1]='h';
    }
    if (c[check[0]][check[1]-1]=='.'){
      Q.push({check[0],check[1]-1,check[2]+1});
      c[check[0]][check[1]-1]='h';
    }
  }
}
