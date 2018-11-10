#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> T(12*24+2,0);
  for (int i=0; i<N; i++){
    string I;
    cin >> I;
    int sh, sm, eh, em;
    sh = (I[0]-'0')*10+(I[1]-'0');
    sm = (I[2]-'0')*10;
    if (I[3]-'0'>=5) sm += 5;
    eh = (I[5]-'0')*10+(I[6]-'0');
    em = (I[7]-'0')*10;
    if (I[8]-'0'> 5) em += 10;
    else if (I[8]-'0' > 0) em += 5;
    // cout << sh << sm <<' ' <<eh << em << endl;
    T[sh*12+sm/5]++;
    T[eh*12+em/5]--;
  }
  for (int i=1; i<12*24+2; i++) T[i] += T[i-1];
  string ans = "";
  for (int i=0; i<12*24+1; i++){
    if (ans.size()==0&&T[i]>0){
      if (i/12<10) ans += '0';
      ans += to_string(i/12);
      if (i%12<2) ans += '0';
      ans += to_string((i%12)*5) + '-';
    }
    else if (ans.size()>0&&T[i]==0){
      if (i/12<10) ans += '0';
      ans += to_string(i/12);
      if (i%12<2) ans += '0';
      ans += to_string((i%12)*5);
      cout << ans << endl;
      ans = "";
    }
  }
}
