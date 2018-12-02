#include <bits/stdc++.h>
using namespace std;

int main(){
  string N;
  cin >> N;
  int Nsize = N.size();
  int ans = 0;
  if (Nsize<3){
    cout << 0 << endl;
    return 0;
  }
  for (int i=1; i<=Nsize-2; i++){
    for (int j=1; j<=Nsize-i-1; j++){
      for (int k=1; k<=Nsize-i-j; k++){
        // cout << i << ' ' << j << ' ' << k << endl;
        string S = "";
        for (int I=0; I<i; I++) S += '3';
        for (int J=0; J<j; J++) S += '5';
        for (int K=0; K<k; K++) S += '7';
        do {
          // cout << S << endl;
          if (S.size() < Nsize) ans++;
          else {
            int s = stoi(S);
            int n = stoi(N);
            if (n>=s) ans++;
          }
        } while(next_permutation(S.begin(), S.end()));
      }
    }
  }
  cout << ans << endl;
}
