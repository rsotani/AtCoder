#include<bits/stdc++.h>
using namespace std;

int main(){
  int X, Y, Z;
  cin >> X >> Y >> Z;
  int ppl = X+Y+Z;
  vector<vector<int> > ABC(ppl, vector<int>(3));
  for (int i=0; i<ppl; i++) cin >> ABC[i][0] >> ABC[i][1] >> ABC[i][2];
  
}
