#include <bits/stdc++.h>
using namespace std;

int main(){
  int X;
  cin >> X;
  int sum = 0;
  for (int i=1;;i++){
    sum += i;
    if (sum >= X){
      cout << i << endl;
      return 0;
    }
  }
}
