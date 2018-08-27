#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  vector<long long> Asum(N);
  for (int i=0; i<N; i++){
    if (i==0) Asum[i] = A[i];
    else Asum[i] = Asum[i-1] + A[i];
  }
  long long ans = 1000000000000000;
  int left = 0;
  int right = 2;
  for (int i=1; i<N-2; i++){
    long long P,Q,R,S;
    while(left<i-1){
      if (abs(Asum[i]-2*Asum[left+1]) < abs(Asum[i]-2*Asum[left])) left++;
      else break;
    }
    while(right<N-1){
      if (abs(Asum[N-1]-2*Asum[right+1]+Asum[i]) < abs(Asum[N-1]-2*Asum[right]+Asum[i])) right++;
      else break;
    }
    P = Asum[left];
    Q = Asum[i] - Asum[left];
    R = Asum[right] - Asum[i];
    S = Asum[N-1] - Asum[right];
    ans = min(ans, max(max(P,Q),max(R,S))-min(min(P,Q),min(R,S)));
  }
  cout << ans << endl;
}
