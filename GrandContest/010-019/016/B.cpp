#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  map<int, int> mp;
  for (int i=0; i<N; i++) mp[a[i]]++;
  auto iterf = mp.begin();
  auto itere = mp.end();
  itere--;
  int amax = itere->first;
  int amin = iterf->first;
  int maxcnt = itere->second;
  int mincnt = iterf->second;
  if (amax-amin>=2) {
    cout << "No" << endl;
    return 0;
  }
  // cout << "amax: " << amax << endl << "maxcnt: " << maxcnt << endl << "mincnt: " << mincnt << endl;
  if (((mp.size()==1) && ((mincnt==amax+1)||((maxcnt/2>=amax)&&(1<=amax))))
   || ((mp.size()==2) && (mincnt+1<=amax) && (amax<=mincnt+(maxcnt/2)))){
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;
}
