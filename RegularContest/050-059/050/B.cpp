#include <bits/stdc++.h>
using namespace std;

int main(){
  long long R, B, x, y;
  cin >> R >> B >> x >> y;
  long long ub = 1e18, lb = 0;
  long long check;
  long long bef = 0;
  while(true){
    check = (ub+lb)/2;
    long long tmpR = R-check, tmpB = B - check;
    if (tmpR>=0&&tmpB>=0&&tmpR/(x-1)+tmpB/(y-1)>=check){
      lb = check;
    } else {
      ub = check;
    }
    if (bef==check){
      if (tmpR-1>=0&&tmpB-1>=0&&(tmpR-1)/(x-1)+(tmpB-1)/(y-1)>=check+1) check++;
      break;
    }
    bef = check;
  }
  cout << check << endl;
}
