#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int> > RH(N, vector<int>(2));
  map<int, vector<int> > mp;
  vector<int> R(N);
  for (int i=0; i<N; i++){
    int r, h;
    cin >> r >> h;
    if (mp[r].size()!=3) mp[r] = {0,0,0};
    RH[i][0] = r; RH[i][1] = h;
    R[i] = r;
    mp[r][h-1]++;
  }
  sort(R.begin(), R.end());
  for (int i=0; i<N; i++){
    int w=0, d=0, l=0;
    w += lower_bound(R.begin(), R.end(), RH[i][0]) - R.begin();
    l += N - (lower_bound(R.begin(), R.end(), RH[i][0]+1) - R.begin());
    w += mp[RH[i][0]][(RH[i][1])%3];
    d += mp[RH[i][0]][(RH[i][1]-1)%3]-1;
    l += mp[RH[i][0]][(RH[i][1]+1)%3];
    cout << w << ' ' << l << ' ' << d << endl;
  }
}
