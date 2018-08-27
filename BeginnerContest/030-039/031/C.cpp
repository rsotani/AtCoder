#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  int ans = -1000000;
  int aoscore = 0;
  for (int i=0; i<N; i++){
    int aomax = -1000000;
    int takascore = -1000000;
    for (int j=0; j<N; j++){
      int aoki = 0;
      int taka = 0;
      if (i==j) continue;
      else if (j<i){
        for (int k=j; k<=i; k++){
          if ((k-j)%2==0) taka += a[k];
          else aoki += a[k];
        }
      } else {
        for (int k=i; k<=j; k++){
          if ((k-i)%2==0) taka += a[k];
          else aoki += a[k];
        }
      }
      if (aoki>aomax){
        aomax = aoki;
        takascore = taka;
      }
    }
    if (ans < takascore) ans = takascore;
  }
  cout << ans << endl;
}
