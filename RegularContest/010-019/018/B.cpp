#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<long long, long long> > xy(N);
  for (int i=0; i<N; i++) cin >> xy[i].first >> xy[i].second;
  int ans = 0;
  for (int i=0; i<N-2; i++){
    for (int j=i+1; j<N-1; j++){
      for (int k=j+1; k<N; k++){
        long long x1 = xy[j].first-xy[i].first, x2 = xy[k].first-xy[i].first,
            y1 = xy[j].second - xy[i].second, y2 = xy[k].second-xy[i].second;
      if ((abs(x1*y2-x2*y1)%2==0)&&(x1*y2-x2*y1!=0)) ans++;
      }
    }
  }
  cout << ans << endl;
}
