#include <bits/stdc++.h>
using namespace std;

int cal(int y, int m, int d){
  return 365*y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
}

int main(){
  int y, m, d;
  cin >> y >> m >> d;
  if (m<3){
    y--;
    m += 12;
  }
  cout << cal(2014,5,17) - cal(y,m,d)  << endl;
}
