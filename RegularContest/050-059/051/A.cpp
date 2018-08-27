#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1, y1, r;
  cin >> x1 >> y1 >> r;
  int x2, y2, x3, y3;
  cin >> x2 >> y2 >> x3 >> y3;
  string red;
  string blue;
  if ((x1-r < x2) || (x1+r > x3) || (y1-r < y2) || (y1+r > y3)) red = "YES";
  else red = "NO";
  if (((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) > r*r) ||
     ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) > r*r) ||
     ((x2-x1)*(x2-x1) + (y3-y1)*(y3-y1) > r*r) ||
     ((x3-x1)*(x3-x1) + (y2-y1)*(y2-y1) > r*r))  blue = "YES";
  else blue = "NO";
  cout << red << endl;
  cout << blue << endl;
}
