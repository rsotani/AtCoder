#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, H;
  cin >> N >> H;
  long long A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  long long cost = 1e18;
  H = N*E - H + 1;
  for (int i=0; i<=N; i++){
    long long tmpcost=0;
    long long tmpH = H;
    tmpH -= (B+E)*i;
    tmpcost += A*i;
    if (tmpH>0) tmpcost += ceil(tmpH/(double)(D+E))*C;
    cost = min(cost, tmpcost);
  }
  cout << cost << endl;
}
