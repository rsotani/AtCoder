#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long Ta = 1;
  long long Ao = 1;
  for (int i=0; i<N; i++){
    long long T, A;
    cin >> T >> A;
    long long tmp = (long long)max((long double)ceil((long double)Ta/T),(long double)ceil((long double)Ao/A));
    Ta = tmp*T;
    Ao = tmp*A;
  }
  cout << Ta+Ao << endl;
}
