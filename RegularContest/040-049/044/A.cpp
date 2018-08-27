#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  if (((N%2 != 0) && (N%5 != 0) && (N%3 != 0) && (N != 1)) ||(N == 2) || (N == 3) || (N == 5))
    cout << "Prime" << endl;
  else cout << "Not Prime" << endl;
}
