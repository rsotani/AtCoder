#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<char> D(K);
  for (int i=0; i<K; i++) cin >> D[i];
  string num = to_string(N);
  while (true){
    for (int i=0; i<K; i++){
      auto result = find(num.begin(), num.end(), D[i]);
      if (result != num.end()) break;
      if (i == K-1){
        cout << num << endl;
        return 0;
      }
    }
    int tmp = stoi(num);
    tmp++;
    num = to_string(tmp);
  }
}
