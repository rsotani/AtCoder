#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int gx, gy;
  cin >> gx >> gy;
  vector<char> hoge={'D','L','R','U'};
  do {
    int x=0, y=0;
    map<char,char> mp;
    mp['W'] = hoge[0];
    mp['X'] = hoge[1];
    mp['Y'] = hoge[2];
    mp['Z'] = hoge[3];
    if (x==gx&&y==gy){
      cout << "Yes" << endl;
      return 0;
    }
    for (auto s: S){
      if (mp[s]=='L') x--;
      else if (mp[s]=='R') x++;
      else if (mp[s]=='U') y++;
      else if (mp[s]=='D') y--;
      if (x==gx&&y==gy){
        cout << "Yes" << endl;
        return 0;
      }
    }
    // cout << hoge[0]<<hoge[1]<<hoge[2]<<hoge[3]<< endl;
  }while(next_permutation(hoge.begin(), hoge.end()));
  cout << "No" << endl;
}
