#include <bits/stdc++.h>
using namespace std;


long long hoge[20];

long long calc(long long x){
  long long ans = 0;
  string xst = to_string(x);
  int xlen = xst.size();
  for (int i=0; i<xlen; i++){
    long long check = xst[i]-'0';
    bool flag = false;
    if (check==4||check==9) flag = true;
    if (check==9) check -= 2;
    else if (check>=4) check--;
    ans += check*hoge[xlen-1-i];
    if (flag) {
      ans += stol(xst.substr(i+1));
      break;
    }
  }
  return x - ans;
}

int main(){
  hoge[0] = 1;
  for (int i=1; i<20; i++){
    hoge[i] = 8*hoge[i-1];
  }
  long long A, B;
  cin >> A >> B;
  cout << calc(B) << "  " << calc(A-1) << endl;
  cout << calc(B) - calc(A-1) << endl;
}
