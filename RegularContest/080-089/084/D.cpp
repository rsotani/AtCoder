#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;
  int score = 1;
  deque<pair<int,int>> dq;
  dq.push_back(make_pair(1,1));
  set<int> st;
  while (true){
    pair<int,int> a = dq.front();
    dq.pop_front();
    if (a.first == 0){
      cout << a.second << endl;
      return 0;
    }
    if (st.find(a.first) == st.end()){
      dq.push_front(make_pair((a.first*10)%K,a.second));
      dq.push_back(make_pair((a.first+1)%K, a.second+1));
      st.insert(a.first);
    }
  }
}
