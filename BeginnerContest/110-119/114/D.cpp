#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> e(N+1,0);
  for (int i=2; i<=N; i++){
    int cur = i;
    for (int j=2; j<=N; j++){
      while(cur%j==0){
        e[j]++;
        cur /= j;
      }
    }
  }
  vector<int> huga(101,0);
  for (auto k: e){
    if (k>=74) huga[75]++;
    if (k>=24) huga[25]++;
    if (k>=14) huga[15]++;
    if (k>=4) huga[5]++;
    if (k>=2) huga[3]++;
  }
  cout << huga[75]+huga[25]*(huga[3]-1)+huga[15]*(huga[5]-1)+huga[5]*(huga[5]-1)*(huga[3]-2)/2 << endl;
}
