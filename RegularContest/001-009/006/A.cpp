#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> E(6);
  vector<int> L(6);
  for (int i=0; i<6; i++) cin >> E[i];
  int B;
  cin >> B;
  for (int i=0; i<6; i++) cin >> L[i];
  int score=0;
  int i=0, j=0;
  while(i<6 || j<6){
    if (E[i] == L[j]){
      score++;
      i++; j++;
    }
    else if(E[i] < L[j]) i++;
    else j++;
  }
  int luc = 0;
  for (int k=0; k<6; k++){
    if (L[k] == B) luc++;
  }
  int ans=0;
  if (score == 6) ans = 1;
  else if ((score == 5) && (luc == 1)) ans = 2;
  else if (score == 5) ans = 3;
  else if (score == 4) ans = 4;
  else if (score == 3) ans = 5;
  cout << ans << endl;
}
