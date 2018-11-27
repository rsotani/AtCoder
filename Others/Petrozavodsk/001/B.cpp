#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  for (int i=0; i<N; i++) cin >> a[i];
  for (int i=0; i<N; i++) cin >> b[i];
  long long OP = 0, asum = 0, bsum = 0;
  for (int i=0; i<N; i++){
    asum += a[i];
    bsum += b[i];
  }
  OP = bsum-asum;
  long long add1 = 0, add2=0, lstop=0;
  for (int i=0; i<N; i++){
    if (a[i] < b[i]){
      add2 += (b[i]-a[i])/2;
      if ((b[i]-a[i])%2==1) add2++;
    } else if (a[i] > b[i]){
      add1 += (a[i]-b[i])/2;
    }
  }
  lstop=max(add1, add2);
  if (lstop<=OP){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
