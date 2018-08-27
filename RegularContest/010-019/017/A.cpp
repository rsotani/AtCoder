#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> p(1000100,1);
  for(int i=2; i<sqrt(1000100); i++){
    if (p[i] == 1){
      for (int j=i*2; j<1000100; j+=i) p[j] = 0;
    }
  }
  int N;
  cin >> N;
  if (p[N] == 0) cout << "NO" << endl;
  else cout << "YES" << endl;
}
