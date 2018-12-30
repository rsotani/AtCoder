#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int len = 0;
  int ans = 0;
  for (int i=0; i<N; i++){
    int A;
    cin >> A;
    if (A) len++;
    else {
      ans = max(ans, len);
      len = 0;
    }
  }
  ans = max(ans, len);
  cout << ans+1 << endl;
}
