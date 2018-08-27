#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 100;
  for (int i=0; i<N; i++){
    int p,count = 0;
    cin >> p;
    while (p){
      if (p%10 != 0) break;
      count++;
      p /= 10;
    }
    ans = min(count,ans);
  }
  cout << ans << endl;
}
