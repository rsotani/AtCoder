#include <bits/stdc++.h>
using namespace std;



int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<long long> > v(N, vector<long long>(3));
  for (int i=0; i<N; i++) cin >> v[i][0] >> v[i][1] >> v[i][2];
  long long ans = 0;
  vector<int> a={-1,1};
  for(int x: a){
    for(int y: a){
      for (int z: a){
        long long tmp = 0;
        sort(v.begin(), v.end(),
        [x,y,z](auto& v1, auto& v2){return (v1[0]*x+v1[1]*y+v1[2]*z > v2[0]*x+v2[1]*y+v2[2]*z);});
        for (int i=0; i<M; i++) tmp += v[i][0]*x+v[i][1]*y+v[i][2]*z;
        ans = max(ans, tmp);
      }
    }
  }
  cout << ans << endl;
}
