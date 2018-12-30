#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  map<long long, long long> mp;
  vector<long long> A(N);
  for (int i=0; i<N; i++){
    cin >> A[i];
    mp[A[i]]++;
  }
  sort(A.begin(), A.end(), greater<long long>());
  vector<long long> check;
  long long hoge = 2;
  for (int i=0; i<31; i++){
    check.push_back(hoge);
    hoge *= 2;
  }
  sort(check.begin(), check.end(), greater<long long>());
  long long ans = 0;
  for (long long i: A){
    if (mp[i]==0) continue;
    for (long long j: check){
      if (j <= i) break;
      long long ni = j-i;
      if (ni!=i){
        if (mp[ni]>0)
        {
          ans++;
          mp[i]--;
          mp[ni]--;
          break;
        }
      }
      else
      {
        if (mp[i]>1){
          ans++;
          mp[i]-=2;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}
