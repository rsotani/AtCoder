#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int count = 0;
  int diff = abs(A-B);
  count += diff/10;
  diff %= 10;
  if (diff<=3) count += diff;
  else if (diff>=8) count += 1+10-diff;
  else count += 1+abs(diff-5);
  cout << count << endl;
}
