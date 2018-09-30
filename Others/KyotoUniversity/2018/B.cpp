#include <bits/stdc++.h>
using namespace std;

int H, W;
string ans;
vector<string> C;

void dps(int pos, int t, string tmpans){
  if (t==0){
    ans = tmpans;
  }
  else{
    if ((pos>0)&&(C[t-1][pos-1]=='.')){
      dps(pos-1,t-1,tmpans+'L');
    }
    if (C[t-1][pos]=='.'){
      dps(pos,t-1,tmpans+'S');
    }
    if ((pos<W-1)&&(C[t-1][pos+1]=='.')){
      dps(pos+1,t-1,tmpans+'R');
    }
  }
}

int main(){
  cin >> H >> W;
  for (int i=0; i<H; i++){
    string c;
    cin >> c;
    C.push_back(c);
  }
  int start;
  for (int i=0; i<W; i++){
    if (C[H-1][i] == 's') start = i;
  }
  ans = "";
  dps(start, H-1, "");
  if (ans.size()==H-1){
    cout << ans << endl;
  }
  else{
    cout << "impossible" << endl;
  }
}
