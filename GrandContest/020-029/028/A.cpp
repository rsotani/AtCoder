#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y){
  if (x<y) gcd(y,x);
  else if (y==0) return x;
  else gcd(y,x%y);
}


int main(){
  long long N, M;
  cin >> N >> M;
  string S, T;
  cin >> S >> T;
  long long check = gcd(N, M);
  long long L = N*M/check;
  long long i=0, j=0;
  while(i<N&&j<M){
    if (S[i]!=T[j]){
      cout << -1 << endl;
      return 0;
    }
    i+=N/check;
    j+=M/check;
  }
  cout << L << endl;
}
