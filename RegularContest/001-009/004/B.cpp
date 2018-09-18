#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  for (int i=0; i<N; i++) cin >> d[i];
  int maxlen=0, minlen=0;
  for (int i=0; i<N; i++) maxlen += d[i];
  sort(d.begin(), d.end());
  if(d[N-1]*2 > maxlen) minlen = d[N-1]*2-maxlen;
  cout << maxlen << endl << minlen << endl;
}
