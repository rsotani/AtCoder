#include <bits/stdc++.h>
using namespace std;

int main(){
  int deg, dis;
  cin >> deg >> dis;
  string dir;
  int W;
  if(113<=deg&&deg<=337) dir="NNE";
  else if (338<=deg&&deg<=562) dir="NE";
  else if (563<=deg&&deg<=787) dir="ENE";
  else if (788<=deg&&deg<=1012) dir="E";
  else if (1013<=deg&&deg<=1237) dir="ESE";
  else if (1238<=deg&&deg<=1462) dir="SE";
  else if (1463<=deg&&deg<=1687) dir="SSE";
  else if (1688<=deg&&deg<=1912) dir="S";
  else if (1913<=deg&&deg<=2137) dir="SSW";
  else if (2138<=deg&&deg<=2362) dir="SW";
  else if (2363<=deg&&deg<=2587) dir="WSW";
  else if (2588<=deg&&deg<=2812) dir="W";
  else if (2813<=deg&&deg<=3037) dir="WNW";
  else if (3038<=deg&&deg<=3262) dir="NW";
  else if (3263<=deg&&deg<=3487) dir="NNW";
  else dir="N";

  if (dis<5*3) W=0;
  else if (dis<31*3) W=1;
  else if (dis<67*3) W=2;
  else if (dis<99*3) W=3;
  else if (dis<159*3) W=4;
  else if (dis<215*3) W=5;
  else if (dis<277*3) W=6;
  else if (dis<343*3) W=7;
  else if (dis<415*3) W=8;
  else if (dis<489*3) W=9;
  else if (dis<569*3) W=10;
  else if (dis<653*3) W=11;
  else W=12;
  if (W==0) cout << "C " << 0 << endl;
  else cout << dir << ' ' << W << endl;
}
