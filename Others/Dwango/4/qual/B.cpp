#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int c2 = 0, c5 = 0;
  for (auto k: s){
    if (k=='2') c2++;
    else c5++;
  }
  if (c2!=c5){
    cout << -1 << endl;
    return 0;
  }
  int slen = s.size();
  int sum = 0;
  int count = 0;
  vector<int> hoge(slen,0);
  while(sum < slen){
    char nxt = '2';
    int befsum = sum;
    count++;
    for (int i=0; i<slen; i++){
      if (hoge[i]==1) continue;
      else if (s[i]==nxt&&nxt=='2'){
        hoge[i]++;
        nxt = '5';
        sum++;
      } else if (s[i]==nxt&&nxt=='5') {
        hoge[i]++;
        nxt = '2';
        sum++;
      }
    }
    if (befsum == sum){
      cout << -1 << endl;
      return 0;
    }
  }
  cout << count << endl;
}
