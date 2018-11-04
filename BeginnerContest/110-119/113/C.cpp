#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int> > vc(M, vector<int>(4));
  for (int i=0; i<M; i++){
    int p, y;
    cin >> p >> y;
    vc[i][0] = i, vc[i][1] = p, vc[i][2] = y;
  }
  sort(vc.begin(), vc.end(), [](const auto& a, const auto& b){return a[2]<b[2];});
  vector<int> num(N+1,1);
  for (int i=0; i<M; i++){
    vc[i][3] = num[vc[i][1]];
    num[vc[i][1]]++;
  }
  sort(vc.begin(), vc.end(), [](const auto& a, const auto& b){return a[0]<b[0];});
  for (int i=0; i<M; i++){
    cout << setfill('0') << right << setw(6) << vc[i][1];
    cout << setfill('0') << right << setw(6) << vc[i][3] << endl;
  }
}
