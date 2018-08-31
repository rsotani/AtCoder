#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string r;
  cin >> r;
  double d = 0;
  for (int i=0; i<N; i++){
    if (r[i] == 'A') d += 4;
    else if (r[i] == 'B') d += 3;
    else if (r[i] == 'C') d += 2;
    else if (r[i] == 'D') d += 1;
  }
  cout << fixed << setprecision(10);
  cout << d/N << endl;
}
