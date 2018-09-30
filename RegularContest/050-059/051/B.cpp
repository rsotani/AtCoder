#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;
  int a=2, b=1;
  for (int i=1; i<K; i++){
    int tmpa=a;
    a += b;
    b = tmpa;
  }
  cout << a << ' ' << b << endl;
}
