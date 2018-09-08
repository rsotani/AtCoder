#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<int> > a(H, vector<int>(W));
  for (int i=0; i<H; i++){
    for (int j=0; j<W; j++){
      cin >> a[i][j];
    }
  }
  int count = 0;
  vector<vector<int>> ans;
  int i=0, j=0;
  while (true){
    if (((H%2==1) && (i==H-1) && (j==W-1)) || ((H%2==0) && (i==H-1) && (j==0))) break;
    else if (((j==0) && (i%2==1)) || ((j==W-1) && (i%2==0))){
      if (a[i][j]%2==1){
        count++;
        a[i+1][j]++;
        ans.push_back({i+1,j+1,i+2,j+1});
      }
      i++;
     }
    else if (i%2==0){
      if (a[i][j]%2==1){
        count++;
        a[i][j+1]++;
        ans.push_back({i+1,j+1,i+1,j+2});
      }
      j++;
    }
    else if (i%2==1){
      if (a[i][j]%2==1){
        count++;
        a[i][j-1]++;
        ans.push_back({i+1,j+1,i+1,j});
      }
      j--;
    }
  }
  cout << count << endl;
  for (int k=0; k<count; k++){
    cout << ans[k][0] << ' ' << ans[k][1] << ' ' << ans[k][2] << ' ' << ans[k][3] << endl;
  }
}
