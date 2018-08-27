#include <bits/stdc++.h>
using namespace std;

double S(long long N){
  double ans=0;
  while(N>0){
    ans += N%10;
    N /= 10;
  }
  return (double)ans;
}


void test(){
  vector<double> V(50000);
  for(int i=0; i<50000; i++){
    V[i] = (i+1)/(double)S(i+1);
  }
  vector<bool> check(50000,false);
  double minv = 50000.0;
  for (int i=49999; i>=0; i--){
    if (minv >= V[i]){
      check[i] = true;
      minv = V[i];
    }
  }
  for(int i=0; i<50000; i++){
    //cout << V[i] << endl;
    if (check[i]) cout << i+1 << endl;
  }
}


int main(){
  //test();
  int K;
  cin >> K;
  int count = 0;
  long long dif = 1;
  long long ans = 0;
  while(count<K){
    if ((ans+dif)/(double)S(ans+dif) <= (ans+dif*10)/(double)S(ans+dif*10)){
      ans += dif;
      cout << ans << endl;
      count++;
    } else{
      dif *= 10;
      ans += dif;
      cout << ans << endl;
      count++;
    }
  }
}
