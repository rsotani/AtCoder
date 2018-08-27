#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  if (N == 0){
    cout << 0 << endl;
    return 0;
  }
  long long num = 0;
  string ans;
  long long check = 1;
  int count = 0;
  while(num != N) {
    check *= 2;
    int md = N%check;
    if (md < 0) md += check;
    if (md == (num%check+check)%check) ans += "0";
    else {
      ans += "1";
      num += pow(-1,count)*check/2;
    }
  // cout << num << endl;
  count++;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
