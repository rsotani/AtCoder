#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int k=0;
  for (int i=1; i<=N; i++){
    k+=i;
    if (k==N){
      k=i;
      break;
    }
    if (k>N){
      cout << "No" << endl;
      return 0;
    }
  }
  vector<vector<int>> ans(k+1);
  int num = k;
  int ind = 0;
  for (int i=1; i<=N; i++){
    ans[ind].push_back(i);
    if(ans[ind].size()==num){
      num--;
      ind++;
    }
  }
  int lst = 1;
  int hoge = 1;
  int i=1;
  while(i<=N){
    ans[hoge].push_back(i);
    hoge++;
    i++;
    if (hoge==k+1){
      lst++;
      hoge=lst;
    }
  }
  cout << "Yes" << endl;
  cout << k+1 << endl;
  for (auto vec: ans){
    cout << k;
    for (auto j: vec){
      cout << ' ' << j;
    }
    cout << endl;
  }
}
