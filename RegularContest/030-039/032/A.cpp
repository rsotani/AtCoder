#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> pri(500000,1);
  set<int> p;
  int sq = sqrt(500000);
  for (int i=2; i<500000; i++){
    if (pri[i] == 1){
      p.insert(i);
      if (i <= sq){
        for (int j=i; j<500000; j += i){
          pri[j] = 0;
        }
      }
    }
  }
  if (p.find(n*(n+1)/2) != p.end()){
    cout << "WANWAN" << endl;
  } else {
    cout << "BOWWOW" << endl;
  }
}
