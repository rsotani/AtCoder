#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int count = 0;
  for (int i=1; i<N+1; i++){
    int dig1 = i % 10;
    int dig2 = (i % 100 - dig1)/10;
    int dig3 = (i % 1000 - dig1 - dig2*10)/100;
    int dig4 = (i % 10000 - dig1 - dig2*10 - dig3*100)/1000;
    int dig5 = (i % 100000 - dig1 - dig2*10 - dig3*100 - dig4*1000)/10000;
    int digsum = dig1+dig2+dig3+dig4+dig5;
    if ((A<=digsum)&&(digsum<=B))
      count += i;
  }
  cout << count << endl;
}
