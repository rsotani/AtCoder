#include <bits/stdc++.h>
using namespace std;

int main(){
  int txa, tya, txb, tyb, T, V;
  cin >> txa >> tya >> txb >> tyb >> T >> V;
  int n;
  cin >> n;
  vector<pair<int, int>> xy(n);
  for (int i=0; i<n; i++) cin >> xy[i].first >> xy[i].second;
  for (int i=0; i<n; i++){
    int x = xy[i].first, y = xy[i].second;
    double root1 = sqrt((txa-x)*(txa-x)+(tya-y)*(tya-y));
    double root2 = sqrt((txb-x)*(txb-x)+(tyb-y)*(tyb-y));
    if (root1+root2<=T*V){
      cout <<"YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}
