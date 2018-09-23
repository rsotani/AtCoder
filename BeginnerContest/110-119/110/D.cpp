#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

const long long md=1e9+7;//mod
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
  int N, M;
  cin >> N >> M;
  int sqM = (int)sqrt(M);
  vector<bool> check(sqM+1,true);
  vector<int> pr;
  map<int, int> mp;
  for (int i=2; i<=sqM+1; i++){
    if (check[i]){
      pr.push_back(i);
      for (int j=i; j<=sqM; j+=i) check[j] = false;
    }
  }
  for (auto k: pr){
    while (true){
      if (M%k != 0) break;
      M /= k;
      mp[k]++;
    }
  }
  if (M != 1) mp[M]++;
  long long ans = 1;
  for (auto k: mp){
    int m = k.second;
    // cout << m << endl;
    ans *= C(N+m-1, m);
    ans %= md;
  }
  cout << ans << endl;
}
