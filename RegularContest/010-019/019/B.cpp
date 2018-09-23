#include <bits/stdc++.h>
using namespace std;

int main(){
  string A;
  cin >> A;
  int Alen = A.size();
  int count = 0;
  for (int i=0; i<Alen/2; i++){
    if (A[i] != A[Alen-1-i]) count++;
  }
  int ans;
  if (count==0){
    if (Alen%2==0) ans = Alen*25;
    else ans = (Alen-1)*25;
  }
  else if (count==1){
    ans = (Alen-2)*25+2*24;
  }
  else ans = Alen*25;
  cout << ans << endl;
}
