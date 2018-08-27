#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> a(N);
  for (int i=0; i<N; i++) cin >> a[i];
  long long sumodd = 0;
  long long sumeven = 0;
  long long amax = a[0];
  int max_i = 0;
  for (int i=0; i<N/2; i++){
    sumodd += max(a[2*i],(long long)0);
    if (amax<a[2*i]){
      amax = a[2*i];
      max_i = 2*i;
     }
    sumeven += max(a[2*i+1],(long long)0);
    if (amax<a[2*i+1]){
      amax = a[2*i+1];
      max_i = 2*i+1;
     }
  }
  if (N%2 == 1) {
    sumodd += max(a[N-1],(long long)0);
    if (amax < a[N-1]) {
      amax = a[N-1];
      max_i = N-1;
    }
  }
  if (amax < 0){
    cout << amax << endl;
    cout << N-1 << endl;
    for (int i=N-1; i>max_i; i--) cout << i+1 << endl;
    for (int i=0; i<max_i; i++) cout << 1 << endl;
    return 0;
  }
  cout << max(sumeven, sumodd) << endl;
  vector<int> manu;
  int i = 0;
  int count = 0;
  if (sumodd < sumeven){
    manu.push_back(1);
    i++;
    count++;
  }
  while (a[i] < 0){
    manu.push_back(1);
    manu.push_back(1);
    i += 2;
    count += 2;
  }
  while(i<N-1){
    if (i+2 > N-1){
      manu.push_back(2);
      i += 2;
      count++;
    } else if (i+2 == N-1){
        if (a[i+2] >= 0){
          manu.push_back(2);
          count++;
          i += 2;
        }
        else {
          manu.push_back(3);
          manu.push_back(2);
          count += 2;
          i += 2;
        }
    } else if (a[i+2] < 0){
      manu.push_back(3);
      i += 2;
      count++;
    } else {
      manu.push_back(2);
      i += 2;
      count++;
    }
  }
  cout << count <<endl;
  for (int x:manu){
    cout << x << endl;
  }
}
