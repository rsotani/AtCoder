#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, L, R;
  cin >> n >> L >> R;
  for (int i=0; i<n; i++){
    int a;
    cin >> a;
    cout << min(R, max(L, a));
    if (i<n-1) cout << ' ';
  }
  cout << endl;
}
