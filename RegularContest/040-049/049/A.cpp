#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << S.substr(0,A) << '\"' << S.substr(A,B-A) << '\"' << S.substr(B, C-B) << '\"' << S.substr(C, D-C) << '\"' << S.substr(D) << endl;
}
