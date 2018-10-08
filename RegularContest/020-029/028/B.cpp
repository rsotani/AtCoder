#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> X(N);
  for (int i=0; i<N; i++) cin >> X[i];
  map<int, int> mp;
  priority_queue<int> que;
  for(int i=0; i<K; i++){
    que.push(X[i]);
    mp[X[i]] = i+1;
  }
  cout << mp[que.top()] << endl;
  for (int i=K; i<N; i++){
    if (que.top()>X[i]){
      que.pop();
      mp[X[i]] = i+1;
      que.push(X[i]);
    }
    cout << mp[que.top()] << endl;
  }
}
