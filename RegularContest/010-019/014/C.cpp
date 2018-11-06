#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int b=0, r=0, g=0;
  for (char s: S){
    if (s=='R') r++;
    else if (s=='G') g++;
    else b++;
  }
  cout << r%2+g%2+b%2 << endl;
}
