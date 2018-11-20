#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, H;
  cin >> N >> H;
  vector<int> h(N);
  for (int i=0; i<N; i++) cin >> h[i];
  vector<int> hsum(N);
  vector<int> per(N);
  for (int i=0; i<N; i++) per[i] = i;
  int count = 0;
  do {
    hsum[0] = h[0];
    for (int i=1; i<N; i++) hsum[i] = h[i] + hsum[i-1];
    bool flag = true;
    for (auto k: per){
      if (hsum[k]>H){
        flag = false;
        break;
      }
      for (int i=k; i<N; i++){
        hsum[i] -= h[k];
      }
    }
    if (flag) count++;
  } while(next_permutation(per.begin(), per.end()));
  cout << count << endl;
}
