#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  vector<long long> cost(N);
  for (int i=0; i<N; i++){
    if (i==0) cost[i] = 0;
    else if (i==1) cost[i] = abs(a[i]-a[i-1]);
    else cost[i] = min(cost[i-1]+abs(a[i]-a[i-1]),cost[i-2]+abs(a[i]-a[i-2]));
  }
  cout << cost[N-1] << endl;
}
