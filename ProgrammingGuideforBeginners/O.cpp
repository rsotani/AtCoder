#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int tall = max(A,max(B,C));
  int small = min(A,min(B,C));
  cout << tall - small << endl;
}
