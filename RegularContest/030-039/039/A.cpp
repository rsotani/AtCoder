#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  string Ast = to_string(A);
  string Bst = to_string(B);
  int ans = A-B;
  for (int i=0; i<3; i++){
    int Atmp = 9 * pow(10,2-i);
    for (int j=0; j<3; j++){
      if (i==j) continue;
      else Atmp += (Ast[j]-'0') * pow(10,2-j);
    }
    ans = max(ans, Atmp-B);
  }
  ans = max(ans, A-100-10*(Bst[1]-'0')-(Bst[2]-'0'));
  ans = max(ans, A-100*(Bst[0]-'0')-(Bst[2]-'0'));
  ans = max(ans, A-100*(Bst[0]-'0')-10*(Bst[1]-'0'));
  cout << ans << endl;
}
