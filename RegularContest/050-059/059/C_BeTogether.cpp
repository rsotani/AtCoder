#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  int ans = 10000000;
  for (int i=-100; i<101; i++){
    int check = 0;
    for (int j=0; j<N; j++) check += (a[j] - i)*(a[j] - i);
    ans = min(ans, check);
  }
  cout << ans << endl;
}
