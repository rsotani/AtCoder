#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int> > S(H, vector<int>(W,0));
  for (int i=0; i<H; i++){
    string s;
    cin >> s;
    for (int j=0; j<W; j++){
      if (s[j]=='#') S[i][j] += 100;
      else {
        for (int y=-1; y<=1; y++){
          for (int x=-1; x<=1; x++){
            if (i+y<0||i+y>=H||j+x<0||j+x>=W) continue;
            S[i+y][j+x]--;
          }
        }
      }
    }
  }
  // for (int i=0; i<H; i++){
  //   for (int j=0; j<W; j++){
  //     cout << S[i][j];
  //   }
  //   cout << endl;
  // }
  vector<vector<int> > ans(H, vector<int>(W,0));
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      if (S[i][j]==100){
        for (int y=-1; y<=1; y++){
          for (int x=-1; x<=1; x++){
            if (i+y<0||i+y>=H||j+x<0||j+x>=W) continue;
            ans[i+y][j+x] += 100;
          }
        }
      }
    }
  }
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      if (S[i][j]>0&&ans[i][j]==0){
        cout <<"impossible" << endl;
        return 0;
      }
    }
  }
  cout << "possible" << endl;
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      if (S[i][j] == 100) cout << '#';
      else cout << '.';
    }
    cout << endl;
  }
}
