#include <bits/stdc++.h>
using namespace std;

int main(){
  int L;
  cin >> L;
  int v=2;
  int e=2;
  vector<vector<int> > E = {{1,2,0},{1,2,1}};
  int check = 2;
  while(L >= check*2){
    E.push_back({v, v+1, check});
    E.push_back({v, v+1, 0});
    v++; e+=2;
    check*=2;
  }
  int cmax = check;
  int goal = v;
  int res = L%cmax;
  while (res > 0){
    int check = 1;
    for (int i=1; i<=20; i++){
      if (check*2<=res){
        check*=2;
        continue;
      }
      E.push_back({i, goal, cmax});
      e++;
      cmax += check;
      res %= check;
      break;
    }
  }
  cout << v << ' ' << e << endl;
  for (int i=0; i<e; i++){
    cout << E[i][0] <<' ' << E[i][1] << ' ' << E[i][2] << endl;
  }
}
