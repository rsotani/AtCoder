#include <bits/stdc++.h>
using namespace std;

const long long md=998244353; //mod number
const int maxn=300100; 
long long fac[maxn],inv[maxn];
long long powd(long long x,long long y){
	long long res=1;
	while(y){
		if(y&1) res=res*x%md;
		x=x*x%md;
		y>>=1;
	}
	return res;
}
void csh(){
	fac[0]=1;
	for(int i=1;i<=300000;i++)
		fac[i]=fac[i-1]*i%md;
	inv[300000]=powd(fac[300000],md-2);
	for(int i=300000;i>=1;i--)
		inv[i-1]=inv[i]*i%md;
}
long long C(int x,int y){
	return fac[x]*inv[y]%md*inv[x-y]%md;
}

int main(){
  csh();
  long long N, A, B, K;
  cin >> N >> A >> B >> K;
  long long ans = 0;
  for (int i=0; i<N+1; i++){
    if (((K - i*A) % B != 0) || (K - i*A < 0) || ((K-i*A)/B > N)) continue;
    ans = (ans + C(N,i) * C(N,(K-i*A)/B)) % md;
  }
  cout << ans << endl;
}
