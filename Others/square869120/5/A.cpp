#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T;
  cin >> N >> T;
  int time=0;
  for (int i=0; i<N; i++){
    int a;
    cin >> a;
    while(a<time){
      a += T;
    }
    time = a;
  }
  cout << time << endl;
}
