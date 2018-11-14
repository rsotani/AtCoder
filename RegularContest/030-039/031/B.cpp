#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<char> > mp(10, vector<char>(10));
  int count = 0;
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      cin >> mp[i][j];
      if (mp[i][j]=='o') count++;
    }
  }
  vector<int> dirx = {1,0,-1,0}, diry = {0,1,0,-1};

  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      if (mp[i][j]=='o') continue;
      vector<vector<int>> check(10,vector<int>(10,0));
      int tmp = 0;
      queue<pair<int,int>> q;
      q.push(make_pair(i,j));
      check[i][j]++;
      while(!q.empty()){
        tmp++;
        auto nw = q.front();
        q.pop();
        for (int k=0; k<4; k++){
          int x = nw.first-dirx[k], y=nw.second-diry[k];
          if (x<0||x>=10||y<0||y>=10) continue;
          if (mp[x][y]=='o'&&check[x][y]==0) {
            q.push(make_pair(x,y));
            check[x][y]++;
          }
        }
      }
      // cout << tmp << endl;
      if (tmp == count+1){
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
