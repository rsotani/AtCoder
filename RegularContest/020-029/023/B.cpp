#include <bits/stdc++.h>
using namespace std;

int main(){
  int R, C, D;
  cin >> R >> C >> D;
  int ans = 0;
  for (int i=0; i<R; i++){
    for (int j=0; j<C; j++){
      int A;
      cin >> A;
      if (((i+j)%2==D%2)&&(i+j<=D)) ans = max(ans, A);
    }
  }
  cout << ans << endl;
}
