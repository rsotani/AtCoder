#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long count = 1;
  for (int i=0; i<N; i++){
    count *= 4;
  }
  cout << count << endl;
}
