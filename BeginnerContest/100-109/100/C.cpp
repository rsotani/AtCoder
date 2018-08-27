#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long ans=0;
  for (int i=0; i<N; i++){
    long long a;
    cin >> a;
    while (true){
      if (a%2 != 0) break;
      ans++;
      a /= 2;
    }
  }
  cout << ans << endl;
}
