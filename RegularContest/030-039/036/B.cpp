#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> h(N);
  for (int i=0; i<N; i++) cin >> h[i];
  char stat;
  int ans=0;
  int count = 1;
  if (h[0]<h[1]) stat='u';
  else stat='d';
  for (int i=1; i<N; i++){
    if (stat=='u'&&h[i-1]<h[i]) count++;
    else if (stat=='u'){
      stat='d';
      count++;
    }
    else if (stat=='d'&&h[i-1]>h[i]) count++;
    else{
      stat='u';
      ans = max(ans, count);
      count=2;
    }
  }
  ans = max(ans,count);
  cout << ans << endl;
}
