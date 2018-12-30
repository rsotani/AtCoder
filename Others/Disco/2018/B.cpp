#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 0;
  for (int i=0; i<N; i++){
    for (int j=0; j<N; j++){
      if ((i+j-N/2.0 >= 0) && (i+1-j-N/2.0 <= 0) && (i+1+j+1-3*N/2.0 <= 0)
       && (i-j-1+N/2.0 >= 0)){
         ans++;
       }
    }
  }
  cout << ans << endl;
}
