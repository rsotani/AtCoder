#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  if (N<10) cout << N << endl;
  else if (N<19) cout << (N-9)*11 << endl;
  else if (N<28) cout << (N-18)*111 << endl;
  else if (N<37) cout << (N-27)*1111 << endl;
  else if (N<46) cout << (N-36)*11111 << endl;
  else cout << (N-45)*111111 << endl;
}
