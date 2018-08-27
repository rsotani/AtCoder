#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  long long sumodd = 0;
  long long sumeven = 0;
  long long anseven = 0;
  long long ansodd = 0;
  for (int i=0; i<n; i++){
    sumodd += a[i];
    sumeven += a[i];
    if (i%2 == 0){
      if (sumodd <= 0){
        ansodd -= sumodd - 1;
        sumodd = 1;
      }
      if (sumeven >= 0){
        anseven += sumeven + 1;
        sumeven = -1;
      }
    }else{
      if (sumeven <= 0){
        anseven -= sumeven - 1;
        sumeven = 1;
      }
      if (sumodd >= 0){
        ansodd += sumodd + 1;
        sumodd = -1;
      }
    }
  }
  cout << min(ansodd,anseven) << endl;
}
