#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];
  set<int> taste;
  taste.insert(A[0]);
  int i=0, j=1;
  int ans = 1;
  while (j<N){
    if (taste.find(A[j]) == taste.end()){
      taste.insert(A[j]);
      j++;
    } else {
      taste.erase(A[i]);
      i++;
    }
    ans = max(ans, (int)taste.size());
    if (i==j) {
      j++;
      taste.insert(A[i]);
    }
  }
  cout << ans << endl;
}
