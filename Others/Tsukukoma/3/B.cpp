#include <bits/stdc++.h>
using namespace std;

int main(){
  string N;
  cin >> N;
  int Nlen = N.size();
  int sum3 = 0;
  int sum11l = 0;
  int sum11r = 0;
  for (int i=0; i<Nlen; i++){
    sum3 += N[i] - '0';
    if (i%2 == 0) sum11r += N[i] - '0';
    else sum11l += N[i] - '0';
  }
  if ((sum3%3 == 0) && ((N[Nlen-1]-'0')%2 == 0)) cout << "yES" << endl;
  else cout << "nO" << endl;
  if (abs(sum11l-sum11r)%11 == 0) cout << "yES" << endl;
  else cout << "nO" << endl;
}
