#include <bits/stdc++.h>
using namespace std;

int main(){
  long long X, K;
  cin >> X >> K;
  long long ans = 1;
  for (int i=0; i<K; i++) ans *= 10;
  cout << (X/ans)*ans + ans << endl;
}
