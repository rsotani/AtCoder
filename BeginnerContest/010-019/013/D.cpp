#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, D;
  cin >> N >> M >> D;
  vector<int> amida(N+1), ans(N+1);
  for (int i=0; i<N+1; i++){
    amida[i] = i;
    ans[i] = i;
  }
  for (int i=0; i<M; i++){
    int A;
    cin >> A;
    swap(amida[A], amida[A+1]);
  }
  while(D){
    if (D&1){
      for (int i=1; i<=N; i++) ans[i] = amida[ans[i]];
    }
    vector<int> tmp(N+1,0);
    for (int i=1; i<=N; i++) tmp[i] = amida[i];
    for (int i=1; i<=N; i++) amida[i] = tmp[tmp[i]];
    D>>=1;
  }
  vector<int> answer(N+1);
  for (int i=1; i<=N; i++){
    answer[ans[i]] = i;
  }
  for (int i=1; i<=N; i++) cout << answer[i] << endl;
}
