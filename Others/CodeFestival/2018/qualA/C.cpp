#include <bits/stdc++.h>
using namespace std;
const long long md=1e9+7;;//mod

int main(){
  long long N, K;
  cin >> N >> K;
  vector<long long> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  vector<long long> Amdi(N);
  for (int i=0; i<N; i++){
    int count = 0;
    long long check = A[i];
    while(check){
      count++;
      check/=2;
    }
    Amdi[i]=count;
  }
  vector<vector<vector<long long>>> dp(N, vector<vector<long long>>(60,vector<long long>(2,0)));
  for (int i=0; i<N; i++){
    for (int j=0; j<60; j++){
      if (i==0){
        for (int k=0; k)
      }
    }
  }
}
