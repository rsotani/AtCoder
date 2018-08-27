#include<bits/stdc++.h>
using namespace std;

long long gcd(long long N, long long X){
  if (X == 0) return N;
  else return gcd(X, N%X);
}


int main(){
  long long N, X;
  cin >> N >> X;
  cout << 3*(N - gcd(N,X)) << endl;
}
