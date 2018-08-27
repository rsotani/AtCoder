#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 0;
  for (int i=0; i<N; i++){
    int a, b;
    cin >> a >> b;
    ans += a*b;
  }
  ans *= 1.05;
  cout << ans << endl;
}
