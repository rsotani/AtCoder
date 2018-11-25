#include <bits/stdc++.h>
using namespace std;

int main(){
  long long X, Y;
  cin >> X >> Y;
  if ((X+Y)%4!=0){
    cout << "No" << endl;
    return 0;
  }
  long long nX = X - (X+Y)/4;
  long long nY = Y - (X+Y)/4;
  if (nX>=0&&nY>=0&&nX%2==0&&nY%2==0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
