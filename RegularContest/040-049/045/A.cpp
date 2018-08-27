#include<bits/stdc++.h>
using namespace std;

int main(){
  string S;
  getline(cin,S);
  int lenS = S.size();
  string ans;
  for(int i=0; i<lenS; i++){
    if (S[i] == 'L'){
      ans += "< ";
      i += 4;
    } else if(S[i] == 'R'){
      ans += "> ";
      i += 5;
    } else {
      ans += "A ";
      i += 7;
    }
  }
  cout << ans.substr(0,ans.size()-1) << endl;
}
