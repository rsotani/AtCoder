#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  N %= 30;
  vector<int> ans = {1,2,3,4,5,6};
  for (int i=0; i<N; i++){
    swap(ans[i%5],ans[i%5+1]);
  }
  for (int i=0; i<6; i++) cout << ans[i];
  cout << endl;
}
