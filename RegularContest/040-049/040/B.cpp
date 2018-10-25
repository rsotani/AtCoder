#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, R;
  cin >> N >> R;
  vector<char> line(N);
  string hoge;
  cin >> hoge;
  for (int i=0; i<N; i++) line[i] = hoge[i];
  int last = 0;
  for (int i=N-1; i>-1; i--){
    if (line[i]=='.'){
      last = i;
      break;
    }
    if (i==0){
      cout << 0 << endl;
      return 0;
    }
  }
  int pos = 0;
  int ans = 0;
  while(true){
    if (pos>=last-R+1){
      ans++;
      break;
    }
    else if (line[pos]=='.'){
      ans++;
      for (int i=0; i<R; i++) line[pos+i]='o';
    }
    else {
      ans++;
      pos++;
    }
  }
  cout << ans << endl;
}
