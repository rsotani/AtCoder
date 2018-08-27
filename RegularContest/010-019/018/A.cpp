#include <bits/stdc++.h>
using namespace std;

int main(){
  double Height, BMI;
  cin >> Height >> BMI;
  cout << fixed << setprecision(10);
  cout << BMI*(Height/100.0)*(Height/100.0) << endl;
}
