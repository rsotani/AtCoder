#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Y;
  cin >> N >> Y;
  for (int i = 0; i < N+1; i++){
    for (int j = 0; j < N+1-i; j++){
      if (Y-i*10000-j*5000 == (N-i-j)*1000){
        cout << i << " " << j  << " "<< N-i-j << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
}
