#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, md;
  cin >> N;
  md = 1000000007;
  vector<int> T(N);
  for (int i=0; i<N; i++) cin >> T[i];
  vector<long long> fac(10010);
  fac[0] = 1;
  for (int i=1; i<10010; i++){
    fac[i] = fac[i-1]*i%md;
  }
  sort(T.begin(), T.end());
  long long score = 0;
  long long pat = 1;
  int bef = -1;
  int count = 1;
  long long now = 0;
  for (int i=0; i<N; i++){
    if (bef != T[i]){
      pat *= fac[count]%md;
      pat %= md;
      count = 1;
      bef = T[i];
    }
    else{
      count++;
    }
    now += T[i];
    score += now;
  }
  pat *= fac[count]%md;
  pat %= md;
  cout << score << endl;
  cout << pat << endl;
}
