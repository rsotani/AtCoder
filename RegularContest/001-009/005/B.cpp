#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  string W;
  cin >> W;
  vector<string> c(9);
  for (int i=0; i<9; i++) cin >> c[i];
  pair<int, int> dr = make_pair(0,0);
  for (char k: W){
    if (k == 'U') dr.second--;
    else if (k == 'D') dr.second++;
    else if (k == 'R') dr.first++;
    else dr.first--;
  }
  string ans = "";
  for (int i=0; i<4; i++){
    ans += c[y-1][x-1];
    if (((y==9) && (dr.second>0)) || ((y==1) && (dr.second<0))) dr.second *= -1;
    if (((x==9) && (dr.first>0)) || ((x==1) && (dr.first<0))) dr.first *= -1;
    y += dr.second;
    x += dr.first;
  }
  cout << ans << endl;
}
