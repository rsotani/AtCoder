#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  set<int> st;
  vector<int> a(M);
  for (int i=0; i<M; i++) cin >> a[i];
  for (int i=M-1; i>-1; i--){
    if (st.find(a[i]) == st.end()){
      cout << a[i] << endl;
      st.insert(a[i]);
    }
  }
  for (int i=1; i<N+1; i++){
    if (st.find(i) == st.end()) cout << i << endl;
  }
}
