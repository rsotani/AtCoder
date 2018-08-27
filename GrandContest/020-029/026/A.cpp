#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  int count = 0;
  int check = 1;
  int bef = a[0];
  for (int i=1; i<N; i++){
    if (a[i] == bef){
      check++;
    } else {
      count += check/2;
      check = 1;
    }
    bef = a[i];
  }
  count += check/2;
  cout << count << endl;
}
