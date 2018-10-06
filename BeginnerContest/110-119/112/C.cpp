#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  vector<vector<long long> > xyh(N, vector<long long>(3));
  for (int i=0; i<N; i++){
    cin >> xyh[i][0] >> xyh[i][1] >> xyh[i][2];
  }
  sort(xyh.begin(), xyh.end() ,[](const auto a, const auto b){return (a[2]>b[2]);});
  for (long long cx=0; cx<=100; cx++){
    for (long long cy=0; cy<=100; cy++){
      bool flag = true;
      long long H=0;
      for (int i=0; i<N; i++){
        if (H==0) {
          if (xyh[i][2]==0) continue;
          else{
            H = xyh[i][2] + abs(cx-xyh[i][0]) + abs(cy-xyh[i][1]);
          }
        }
        else {
          if (xyh[i][2] != max(H-abs(cx-xyh[i][0])-abs(cy-xyh[i][1]), (long long)0)){
            flag = false;
            break;
          }
        }
      }
      if (flag&&H!=0){
        cout << cx << ' ' << cy << ' ' << H << endl;
        return 0;
      }
    }
  }
}
