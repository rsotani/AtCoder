#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C,D,E,F;
  cin >> A >> B >> C >> D >> E >> F;
  double conc = 0;
  int ansswater = 0;
  int anssuger = 0;
  vector<int> water(31,0);
  for (int i=0; i<31; i++){
    if (i == 0) water[i] = 1;
    else if ((i*100 <= F) && (((i-A >= 0) && (water[i-A] == 1)) || ((i-B >= 0) && (water[i-B] == 1)))) water[i] = 1;
  }
  for (int i=0; i<31; i++){
    if (water[i] == 0) continue;
    vector<int> suger(i*E+1,0);
    for (int j=0; j<i*E+1; j++){
      if (100*i+j>F) break;
      if (j==0) suger[j] = 1;
      else if(((j-C >= 0) && (suger[j-C] == 1)) || ((j-D >= 0) && (suger[j-D] == 1))) suger[j] = 1;
    }
    for (int j=i*E; j>-1; j--){
      if (suger[j] == 1){
        if (conc <= (double)100.0*j/(100.0*i+j)){
          conc = 100.0*j/(100.0*i+j);
          ansswater = 100*i+j;
          anssuger = j;
        }
        break;
      }
    }
  }
  cout << ansswater << ' ' << anssuger << endl;
}
