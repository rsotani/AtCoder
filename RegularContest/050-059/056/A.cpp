#include <bits/stdc++.h>
using namespace std;

int main(){
  long long A, B, K, L;
  cin >> A >> B >> K >> L;
  long long buyset = K/L;
  cout << min(buyset*B + (K-buyset*L)*A, (buyset+1)*B) << endl;
}
