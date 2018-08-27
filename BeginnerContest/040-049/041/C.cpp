#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int> > a(N, vector<int>(2));
  for (int i=0; i<N; i++){
    cin >> a[i][0];
    a[i][1] = i+1;
  }
  sort(a.begin(),a.end(),[](auto& a1,auto& a2){return a1[0]>a2[0];});
  for (int i=0; i<N; i++) cout << a[i][1] << endl;
}
