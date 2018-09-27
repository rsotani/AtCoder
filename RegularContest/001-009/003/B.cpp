#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i=0; i<N; i++){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    S[i] = s;
  }
  sort(S.begin(), S.end());
  for (int i=0; i<N; i++){
    reverse(S[i].begin(),S[i].end());
    cout << S[i] << endl;
  }
}
