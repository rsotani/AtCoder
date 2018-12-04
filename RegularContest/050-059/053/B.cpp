#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  vector<int> num(26);
  for (int i=0; i<S.size(); i++){
    num[S[i]-'a']++;
  }
  int oddnum = 0;
  for (int i=0; i<26; i++){
    if (num[i]%2==1){
      oddnum++;
    }
  }
  int ans;
  if (oddnum<=1){
    ans = S.size();
  } else {
    ans = S.size()/oddnum;
    if (ans%2==0) ans--;
  }
  cout << ans << endl;
}
