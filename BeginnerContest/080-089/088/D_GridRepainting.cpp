#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<char> > S(H+2, vector<char>(W+2));
  int score = 0;
  for (int i=0; i<W+2; i++) S[0][i] = '#';
  for (int i=1; i<H+1; i++){
    string t;
    S[i][0] = '#';
    cin >> t;
    for (int j=0; j<W; j++){
      if (t[j] == '.') score++;
      S[i][j+1] = t[j];
    }
    S[i][W+1] += '#';
  }
  for (int i=0; i<W+2; i++) S[H+1][i] = '#';
  queue<vector<int> > start;
  start.push({1,1});
  int count = 1;
  S[1][1] = '#';
  while (true){
    count++;
    queue<vector<int> > nextst;
    while(!start.empty()){
      vector<int> check;
      check = start.front();
      start.pop();
      for (int i: {-1,0,1}){
        for (int j:{-1,0,1}){
          if ((abs(i)>0) && (abs(j)>0)) continue;
          if ((check[0]+i == H) && (check[1]+j == W)){
            cout << score - count << endl;
            return 0;
          } else if (S[check[0]+i][check[1]+j] == '.'){
            nextst.push({check[0]+i,check[1]+j});
            S[check[0]+i][check[1]+j] = '#';
          }
        }
      }
    }
    start = nextst;
    if (start.empty()) break;
  }
  cout << -1 << endl;
}
