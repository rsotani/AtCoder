#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  if (N <= 5) cout << N*B << endl;
  else cout << B*5 + A*(N-5) << endl;
}
