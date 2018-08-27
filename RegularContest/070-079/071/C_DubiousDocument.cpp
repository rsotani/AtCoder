#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> alpha(26,50);
  string check = "abcdefghijklmnopqrstuvwxyz";
  for (int i=0; i<n; i++){
    vector<int> tmp(26,0);
    string S;
    cin >> S;
    int lenS = S.size();
    for (int j=0; j<lenS; j++){
      for (int k=0; k<26; k++){
        if (S[j] == check[k])
          tmp[k] += 1;
      }
    }
    for (int l=0; l<26; l++)
      alpha[l] = min(alpha[l],tmp[l]);
  }
  string ans = "";
  for (int m=0; m<26; m++){
    int al = alpha[m];
    for (int i=0; i<al; i++)
      ans += check[m];
  }
  cout << ans << endl;
}
