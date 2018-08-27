#include <bits/stdc++.h>
using namespace std;

int main(){
  int D, G;
  cin >> D >> G;
  vector<int> p(D);
  vector<int> c(D);
  for (int i=0; i<D; i++){
    cin >> p[i] >> c[i];
  }
  int ans = 1000000000;
  for(int i=0; i< (1 << D);i++){
    int score=0, solved=0, other=-1, hoge=i;
    for (int j=0; j<D; j++){
      if (hoge&1){
        score += 100*(j+1)*p[j]+c[j];
        solved += p[j];
      } else {
        other = j;
      }
      hoge >>= 1;
    }
    if (score < G){
      if (G > score+p[other]*100*(other+1)) continue;
      solved += ceil((G-score)/(double)(100*(other+1)));
    }
    ans = min(ans, solved);
  }
  cout << ans << endl;
}
