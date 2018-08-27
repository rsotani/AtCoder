#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<pair<int, int> > st(M);
  for (int i=0; i<M; i++){
    int s,t;
    cin >> s >> t;
    st[i].first = s;
    st[i].second = t;
  }
  vector<int> T(N+2,0);
  for (int i=0; i<M; i++){
    T[st[i].first]++; T[st[i].second+1]--;
  }
  int count = 0;
  vector<int> mem(N+2,0);
  for (int i=1; i<N+1; i++){
    count += T[i];
    if (count < 2) mem[i] = mem[i-1]+count;
    else mem[i] = mem[i-1]+2;
  }
  int anscount = 0;
  vector<int> ans;
  for (int i=0; i<M; i++){
    int dif = st[i].second - st[i].first;
    if ((dif==0) && (mem[st[i].first]-mem[st[i].first-1]==2)){
      anscount++;
      ans.push_back(i+1);
    }
    else if ((dif > 0) && ((mem[st[i].second]-mem[st[i].first-1]) == 2*(dif+1))){
      anscount++;
      ans.push_back(i+1);
    }
  }
  cout << anscount << endl;
  for (int x: ans)
  cout << x << endl;
  //for (int x: mem) cout << x << endl;
}
