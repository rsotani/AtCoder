#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> num(N+2,0);
  for (int i=2; i<N+1; i++){
    int check = i;
    for (int j=2; j<i+1; j++){
      if (check==1) break;
      while (check%j==0){
        num[j] += 1;
        check /= j;
      }
    }
  }
  long long ans = 1;
  for (int i=2; i<N+1; i++){
    ans *= (num[i]+1);
    ans = ans % ((int)pow(10,9)+7);
  }
  cout << ans << endl;
}
