#include <bits/stdc++.h>
using namespace std;

int main(){
  long long A, K;
  cin >> A >> K;
  if (K == 0){
    cout << 2000000000000 - A << endl;
  }else{
    long long now = A;
    int day = 0;
    while (now < 2000000000000){
      now += now*K + 1
      day += 1;
    }
    cout << day << endl;
  }
}
