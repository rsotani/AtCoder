#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, L;
  cin >> N >> L;
  string S;
  cin >> S;
  int ans = 0;
  int count = 1;
  for (char s: S){
    if (s == '+'){
      count++;
      if (count > L){
        count = 1;
        ans += 1;
      }
    }
    else count--;
  }
  cout << ans << endl;
}
