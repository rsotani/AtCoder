#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<int> ya(N,0);
  for (int i=0; i<Q; i++){
    int l, r;
    cin >> l >> r;
    ya[l-1] += 1;
    if (r < N) ya[r] -= 1;
  }
  int s = 0;
  for (int i=0; i<N; i++){
    s += ya[i];
    cout << s%2;
  }
  cout << endl;
}
