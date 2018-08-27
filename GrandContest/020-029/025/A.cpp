#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int count = 10000;
  for (int i=1; i<N-1; i++){
    int j = N - i;
    int i1 = i%10;
    int i10 = i/10%10;
    int i100 = i/100%10;
    int i1000 = i/1000%10;
    int i10000 = i/10000%10;
    int i100000 = i/100000%10;
    int isum = i1+i10+i100+i1000+i10000+i100000;
    int j1 = j%10;
    int j10 = j/10%10;
    int j100 = j/100%10;
    int j1000 = j/1000%10;
    int j10000 = j/10000%10;
    int j100000 = j/100000%10;
    int jsum = j1+j10+j100+j1000+j10000+j100000;
    count = min(count, isum+jsum);
  }
  if (N == 2){
    cout << 2 << endl;
  }
  else cout << count << endl;
}
