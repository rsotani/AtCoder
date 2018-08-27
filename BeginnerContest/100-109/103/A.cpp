#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int ans = min(abs(a-b)+abs(b-c),min(abs(b-c)+abs(c-a), abs(c-a)+abs(a-b)));
  cout << ans << endl;
}
