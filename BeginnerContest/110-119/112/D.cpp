#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N, M;
  cin >> N >> M;
  vector<long long> yaku;
  for (long long i=1; i*i<=M; i++){
    if (M%i==0){
      yaku.push_back(i);
      if (i*i!=M){
        yaku.push_back(M/i);
      }
    }
  }
  sort(yaku.begin(), yaku.end(), greater<long long>());
  for (long long i: yaku){
    if ((M-N*i>=0)&&((M-N*i)%i==0)){
      cout << i << endl;
      return 0;
    }
  }
}
