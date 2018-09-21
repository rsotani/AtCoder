#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> w(N);
  for (int i=0; i<N; i++){
    string t;
    cin >> t;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    w[i] = t;
  }
  vector<string> ans;
  for (string word: w){
    string tmp = "";
    for (char k: word){
      if ((k=='b')||(k=='c')) tmp += '1';
      else if ((k=='t')||(k=='j')) tmp += '3';
      else if ((k=='l')||(k=='v')) tmp += '5';
      else if ((k=='p')||(k=='m')) tmp += '7';
      else if ((k=='n')||(k=='g')) tmp += '9';
      else if ((k=='d')||(k=='w')) tmp += '2';
      else if ((k=='f')||(k=='q')) tmp += '4';
      else if ((k=='s')||(k=='x')) tmp += '6';
      else if ((k=='h')||(k=='k')) tmp += '8';
      else if ((k=='z')||(k=='r')) tmp += '0';
    }
    if (tmp.size()>0) ans.push_back(tmp);
  }
  for (int i=0; i<ans.size(); i++){
    if (i>0) cout << ' ';
    cout << ans[i];
  }
  cout << endl;
}
