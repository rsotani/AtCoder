#include <bits/stdc++.h>
using namespace std;
const long long md=1e9+7;;//mod
const int maxn=300100;
long long fac[maxn],inv[maxn];

// cal x^y in logy order
long long powd(long long x,long long y){
	long long res=1;
	while(y){
		if(y&1) res=res*x%md;
		x=x*x%md;
		y>>=1;
	}
	return res;
}
// calc n! by fermat's little theory
void csh(){
	fac[0]=1;
	for(int i=1;i<=300000;i++)
		fac[i]=fac[i-1]*i%md;
	inv[300000]=powd(fac[300000],md-2);
	for(int i=300000;i>=1;i--)
		inv[i-1]=inv[i]*i%md;
}
//calc combination in xlonx
long long C(int x,int y){
	return fac[x]*inv[y]%md*inv[x-y]%md;
}


int main(){
  csh();
  long long N, K;
  cin >> N >> K;
  vector<long long> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  vector<long long> B(N,1);
  for (int i=0; i<N; i++){
    while(A[i]>0){
      A[i]/=2;
      B[i]++;
    }
  }
  long long check=0;
  for (int i=0; i<N; i++){
    check += B[i]-1;
  }
  long long ans = 1;
  long long difans = 1;
  // for (int i=0; i<N; i++) cout << B[i] << ' ';
  // cout << endl;
  if (check<K){
    for (int i=0; i<N; i++){
      ans *= B[i];
      ans %= md;
      difans *= (B[i]-1);
      difans %= md;
    }
    // cout<< "hoge" << endl;
    cout << (ans-difans+md)%md << endl;
    return 0;
  }
  else {
    cout <<C(N+K-1,K) << endl;
  }
}
