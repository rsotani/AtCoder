#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, X;
  int ans = 0;
  cin >> A >> B >> C >> X;
  for (int i=0; i<A+1; i++){
    for (int j=0; j<B+1; j++){
      if ((0 <= X-500*i-100*j) && (X-500*i-100*j <= 50*C))
        ans++;
    }
  }
  cout << ans << endl;
}
