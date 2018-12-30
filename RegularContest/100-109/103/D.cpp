#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  vector<vector<long long> > XY(N, vector<int>(2));
  for (int i=0; i<N; i++) cin >> XY[i][0] >> XY[i][1];
  if ((XY[0][0]+XY[0][1]+1e10)%2=0){
    for (int i=0; i<N; i++){
      if ((XY[i][0]+XY[i][1]+1e10)%2==1){
        cout << "-1" << endl;
        return 0;
      }
    }
  } else {
    for (int i=0; i<N; i++){
      if ((XY[i][0]+XY[i][1]+1e10)%2==0){
        cout << "-1" << endl;
        return 0;
      }
    }
  }

}
