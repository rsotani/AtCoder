#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  if (N==1){
    cout << "Deficient" << endl;
    return 0;
  }
  vector<long long> hoge;
  for (long long i=1; i*i<=N; i++){
    if (N%i==0){
      hoge.push_back(i);
      if (i!=1&&i*i!=N) hoge.push_back(N/i);
    }
  }
  long long hogehoge = 0;
  for (long long i: hoge){
    hogehoge += i;
  }
  if (hogehoge<N) cout << "Deficient" << endl;
  else if (hogehoge==N) cout << "Perfect" << endl;
  else cout << "Abundant" << endl;
}
