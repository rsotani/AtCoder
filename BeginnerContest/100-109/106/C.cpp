#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long K;
  cin >> s >> K;
  for (int i=0; i<K; i++){
    if (s[i] != '1'){
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << '1' << endl;
}
