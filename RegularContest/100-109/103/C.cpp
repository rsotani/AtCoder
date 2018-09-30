#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  vector<int>od(100001,0), ev(100001,0);
  for (int i=0; i<n; i++){
    if (i%2==0) ev[v[i]]++;
    else od[v[i]]++;
  }
  int evfir=0, evsec=0, odfir=0, odsec=0;
  int evfirind=-1,evsecind=-1,odfirind=-1,odsecind=-1;
  for (int i=0; i<100001; i++){
    if (od[i] > odfir){
      odsec = odfir;
      odfir = od[i];
      odsecind = odfirind;
      odfirind = i;
    }
    else if (od[i] > odsec){
      odsec = od[i];
      odsecind = i;
    }
    if (ev[i] > evfir){
      evsec = evfir;
      evfir = ev[i];
      evsecind = evfirind;
      evfirind = i;
    }
    else if (ev[i] > evsec) evsec = ev[i];
  }
  int ans;
  if (odfirind != evfirind) ans = n-odfir-evfir;
  else if ((odsecind==-1)&&(evsecind==-1)) ans = n/2;
  else ans = min(n-odfir-evsec, n-odsec-evfir);
  cout << ans << endl;
}
