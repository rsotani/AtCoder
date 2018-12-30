#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;
  cout << min(ceil(N/(double)A)*B,ceil(N/(double)C)*D) << endl;
}
