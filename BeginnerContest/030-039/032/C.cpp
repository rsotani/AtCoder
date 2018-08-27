#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> s(N);
  int mi = 1;
  for (int i=0; i<N; i++){
    cin >> s[i];
    mi = min(s[i],mi);
  }
  if (mi == 0){
    cout << N << endl;
    return 0;
  }
  int left = 0;
  int right = 0;
  long long ti = s[0];
  int anslen = 0;
  while(right<N){
    if (ti>K){
      if (left == right) {
        ti /= s[right];
        left++; right++;
        if (right == N) break;
        ti *= s[right];
      } else {
        ti /= s[left];
        left++;
      }
    } else {
      right++;
      ti *= s[right];
    }
    anslen = max(anslen, right-left);
  }
  anslen = max(anslen, right-left);
  cout << anslen << endl;
}
