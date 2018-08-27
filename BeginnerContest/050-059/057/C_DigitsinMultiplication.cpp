#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  int sqN = (int)ceil((int)sqrt(N));
  int ans = 10000;
  for (int i=1; i<sqN+1; i++){
    if (N%i == 0){
      string istr = to_string(i);
      string jstr = to_string((long long)N/i);
      int leng = max(istr.size(),jstr.size());
      ans = min(ans,leng);
    }
  }
  cout << ans << endl;
}
